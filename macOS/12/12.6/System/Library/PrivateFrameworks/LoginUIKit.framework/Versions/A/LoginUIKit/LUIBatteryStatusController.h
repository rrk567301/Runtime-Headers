@class LUIBatteryView, NSNumberFormatter;

@interface LUIBatteryStatusController : LUIController {
    int _timeRemainingToken;
    int _lowBatteryToken;
    LUIBatteryView *_batteryView;
    NSNumberFormatter *_percentFormatter;
}

+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (id)initWithStyle:(int)a0;
- (void)tearDownController;
- (void)_layoutContentView;
- (void)_setupContentView;
- (void)pauseController;
- (void)resumeController;
- (id)_colorForStyle;
- (id)_stringForBatteryPercentage:(id)a0;
- (id)_imageForBattery:(id)a0;

@end
