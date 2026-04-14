@class NSResponder;

@interface AVFloatingTrimControlsViewController : AVTrimControlsViewController {
    NSResponder *_previousFirstResponder;
}

- (void).cxx_destruct;
- (long long)layoutStyle;
- (void)trimView:(id)a0 willStartTracking:(unsigned long long)a1;
- (void)trimView:(id)a0 didStopTracking:(unsigned long long)a1;
- (id)controlsStyleIdentifier;
- (id)backgroundBackdropViewMaskImage;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (struct { double x0; double x1; double x2; double x3; })controlsContentViewMargin;
- (void)_updateFirstResponderIfNeeded;
- (void)_restorePreviousFirstResponderIfNeeded;
- (unsigned long long)preferredTrimViewStyle;

@end
