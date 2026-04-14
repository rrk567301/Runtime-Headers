@class HMDCharacteristic;

@interface HMDWidgetMonitoredCharacteristic : NSObject

@property (readonly) HMDCharacteristic *characteristic;
@property (readonly) BOOL reachabilityMonitored;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCharacteristic:(id)a0 reachabilityMonitored:(BOOL)a1;

@end
