@class NSString;

@interface AXKSystemStatus : NSObject

@property (nonatomic) double _batteryStatusLastUpdated;
@property (copy, nonatomic) NSString *_batteryStatus;
@property (nonatomic) BOOL _hasBattery;
@property (readonly, copy, nonatomic) NSString *batteryStatus;
@property (readonly, copy, nonatomic) NSString *wifiStatus;
@property (readonly, copy, nonatomic) NSString *date;
@property (readonly, copy, nonatomic) NSString *time;

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasBattery;
- (void)_updateBatteryStatusIfNeeded;

@end
