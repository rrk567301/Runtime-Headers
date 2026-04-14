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
- (void)pauseController;
- (id)_colorForStyle;
- (id)_imageForBattery:(id)a0;
- (void)_layoutContentView;
- (void)_setupContentView;
- (id)_stringForBatteryPercentage:(id)a0;
- (void)resumeController;
- (void)tearDownController;

@end
