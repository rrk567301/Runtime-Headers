@class NSNumberFormatter, LUI2BatteryView;

@interface LUI2BatteryViewController : LUI2ViewController

@property int timeRemainingToken;
@property int lowBatteryToken;
@property (retain) NSNumberFormatter *percentFormatter;
@property (retain) LUI2BatteryView *batteryView;

- (void)pause;
- (void)resume;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)_imageForBattery:(id)a0;
- (id)_stringForBatteryPercentage:(id)a0;
- (void)_updateViews;
- (void)cancelNotifications;

@end
