@class NSResponder;

@interface AVFloatingTrimControlsViewController : AVTrimControlsViewController {
    NSResponder *_previousFirstResponder;
}

- (void)_updateFirstResponderIfNeeded;
- (long long)layoutStyle;
- (void).cxx_destruct;
- (id)backgroundBackdropViewMaskImage;
- (void)_restorePreviousFirstResponderIfNeeded;
- (struct { double x0; double x1; double x2; double x3; })controlsContentViewMargin;
- (id)controlsStyleIdentifier;
- (long long)cornerRadiusStyle;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (unsigned long long)preferredTrimViewStyle;
- (void)trimView:(id)a0 didStopTracking:(unsigned long long)a1;
- (void)trimView:(id)a0 willStartTracking:(unsigned long long)a1;

@end
