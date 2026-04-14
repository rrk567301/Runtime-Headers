@class NSLayoutConstraint, NSImageView, NSTextField;

@interface LUIBatteryView : NSView {
    NSTextField *_batteryTextField;
    NSImageView *_batteryImageView;
    NSLayoutConstraint *_imageToTextConstraint;
}

- (double)baselineOffsetFromBottom;
- (double)lastBaselineOffsetFromBottom;
- (void).cxx_destruct;
- (double)firstBaselineOffsetFromTop;
- (id)batteryImageView;
- (void)setBatteryImageView:(id)a0;
- (void)_updateImageToTextConstraint;
- (id)batteryTextField;
- (void)setBatteryTextField:(id)a0;

@end
