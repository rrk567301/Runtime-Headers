@class NSView;

@interface LPIndeterminateProgressSpinnerView : LPComponentView {
    NSView *_platformView;
}

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutComponentView;
- (void)ensurePlatformView;

@end
