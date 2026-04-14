@class NSNumberFormatter, LUI2BatteryView;

@interface LUI2BatteryViewController : LUI2ViewController

@property int timeRemainingToken;
@property int lowBatteryToken;
@property (retain) NSNumberFormatter *percentFormatter;
@property (retain) LUI2BatteryView *batteryView;

- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)loadView;
- (void)viewDidLoad;
- (void)_updateViews;
- (id)_stringForBatteryPercentage:(id)a0;
- (id)_imageForBattery:(id)a0;

@end
