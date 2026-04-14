@class NSLayoutConstraint, NSImageView, NSTextField;

@interface LUIBatteryView : NSView {
    NSTextField *_batteryTextField;
    NSImageView *_batteryImageView;
    NSLayoutConstraint *_imageToTextConstraint;
}

- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (double)baselineOffsetFromBottom;
- (id)batteryImageView;
- (void)setBatteryImageView:(id)a0;
- (void)_updateImageToTextConstraint;
- (id)batteryTextField;
- (void)setBatteryTextField:(id)a0;

@end
