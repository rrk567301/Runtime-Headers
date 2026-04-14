@class NSImageView, NSTextField;

@interface LUI2BatteryView : NSStackView

@property (retain) NSTextField *batteryTextField;
@property (retain) NSImageView *batteryImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setBatteryPercentage:(id)a0;
- (void).cxx_destruct;
- (void)_setupBatteryView;
- (void)setBatteryImage:(id)a0;

@end
