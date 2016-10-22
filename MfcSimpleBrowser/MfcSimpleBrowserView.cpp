
// MfcSimpleBrowserView.cpp : CMfcSimpleBrowserView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MfcSimpleBrowser.h"
#endif

#include "MfcSimpleBrowserDoc.h"
#include "MfcSimpleBrowserView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMfcSimpleBrowserView

IMPLEMENT_DYNCREATE(CMfcSimpleBrowserView, CHtmlView)

BEGIN_MESSAGE_MAP(CMfcSimpleBrowserView, CHtmlView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CHtmlView::OnFilePrint)
END_MESSAGE_MAP()

// CMfcSimpleBrowserView 构造/析构

CMfcSimpleBrowserView::CMfcSimpleBrowserView()
{
	// TODO:  在此处添加构造代码

}

CMfcSimpleBrowserView::~CMfcSimpleBrowserView()
{
}

BOOL CMfcSimpleBrowserView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CHtmlView::PreCreateWindow(cs);
}

void CMfcSimpleBrowserView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	Navigate2(_T("http://www.msdn.microsoft.com/visualc/"),NULL,NULL);
}


// CMfcSimpleBrowserView 打印



// CMfcSimpleBrowserView 诊断

#ifdef _DEBUG
void CMfcSimpleBrowserView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CMfcSimpleBrowserView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CMfcSimpleBrowserDoc* CMfcSimpleBrowserView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMfcSimpleBrowserDoc)));
	return (CMfcSimpleBrowserDoc*)m_pDocument;
}
#endif //_DEBUG


// CMfcSimpleBrowserView 消息处理程序
