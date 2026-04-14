@class HMDCharacteristic;

@interface HMDWidgetMonitoredCharacteristic : NSObject

@property (readonly) HMDCharacteristic *characteristic;
@property (readonly) BOOL reachabilityMonitored;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)a0 reachabilityMonitored:(BOOL)a1;

@end
