@interface _WKWarningViewTextView : NSTextView {
    struct WeakObjCPtr<_WKWarningView> { id m_weakReference; } _warning;
}

- (BOOL)clipsToBounds;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithAttributedString:(id)a0 forWarning:(id)a1;

@end
