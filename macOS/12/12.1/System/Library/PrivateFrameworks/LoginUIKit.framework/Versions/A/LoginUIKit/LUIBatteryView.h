@class NSLayoutConstraint, NSImageView, NSTextField;

@interface LUIBatteryView : NSView {
    NSTextField *_batteryTextField;
    NSImageView *_batteryImageView;
    NSLayoutConstraint *_imageToTextConstraint;
}

- (double)firstBaselineOffsetFromTop;
- (double)baselineOffsetFromBottom;
- (double)lastBaselineOffsetFromBottom;
- (id)batteryImageView;
- (void)setBatteryImageView:(id)a0;
- (id)batteryTextField;
- (void)setBatteryTextField:(id)a0;
- (void)_updateImageToTextConstraint;

@end
