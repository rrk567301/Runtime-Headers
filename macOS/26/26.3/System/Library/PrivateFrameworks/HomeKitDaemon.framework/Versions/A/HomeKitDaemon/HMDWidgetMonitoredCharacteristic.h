@class HMDCharacteristic;

@interface HMDWidgetMonitoredCharacteristic : NSObject

@property (readonly) HMDCharacteristic *characteristic;
@property (readonly) BOOL reachabilityMonitored;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)a0 reachabilityMonitored:(BOOL)a1;

@end
