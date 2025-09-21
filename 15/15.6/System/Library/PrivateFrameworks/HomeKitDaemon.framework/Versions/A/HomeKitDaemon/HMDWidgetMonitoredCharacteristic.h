@class HMDCharacteristic;

@interface HMDWidgetMonitoredCharacteristic : NSObject

@property (readonly) HMDCharacteristic *characteristic;
@property (readonly) char reachabilityMonitored;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 reachabilityMonitored:(char)a1;

@end
