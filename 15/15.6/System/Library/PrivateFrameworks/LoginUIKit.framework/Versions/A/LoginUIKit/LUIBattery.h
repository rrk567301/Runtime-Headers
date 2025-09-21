@class NSDictionary;

@interface LUIBattery : NSObject

@property (retain) NSDictionary *info;
@property (readonly) float currentCapacity;
@property (readonly) char isCharged;
@property (readonly) char isCharging;
@property (readonly) char isHealthy;
@property (readonly) char isInPoorCondition;
@property (readonly) char isInternal;
@property (readonly) char isPluggedIn;
@property (readonly) char isPresent;
@property (readonly) float maxCapacity;
@property (readonly) float percentRemaining;
@property (readonly) float relativeCapacity;

+ (id)battery;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)_updateBatteryState;
- (char)_isBattery;

@end
