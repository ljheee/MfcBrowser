
// MfcSimpleBrowserView.h : CMfcSimpleBrowserView 类的接口
//

#pragma once


class CMfcSimpleBrowserView : public CHtmlView
{
protected: // 仅从序列化创建
	CMfcSimpleBrowserView();
	DECLARE_DYNCREATE(CMfcSimpleBrowserView)

// 特性
public:
	CMfcSimpleBrowserDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CMfcSimpleBrowserView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MfcSimpleBrowserView.cpp 中的调试版本
inline CMfcSimpleBrowserDoc* CMfcSimpleBrowserView::GetDocument() const
   { return reinterpret_cast<CMfcSimpleBrowserDoc*>(m_pDocument); }
#endif

