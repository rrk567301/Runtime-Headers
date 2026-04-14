@class NSView;

@interface AMSUIWebViewImageWrapper : AMSUICommonView

@property (retain) NSView *view;
@property double inset;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 topInset:(double)a1;

@end
