@interface _WKWarningViewTextView : NSTextView {
    struct WeakObjCPtr<_WKWarningView> { id m_weakReference; } _warning;
}

- (BOOL)clipsToBounds;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithAttributedString:(id)a0 forWarning:(id)a1;

@end
