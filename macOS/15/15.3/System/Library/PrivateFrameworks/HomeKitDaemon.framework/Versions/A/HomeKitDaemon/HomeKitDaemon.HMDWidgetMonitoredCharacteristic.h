@interface HomeKitDaemon.HMDWidgetMonitoredCharacteristic : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ characteristic;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ reachabilityMonitored;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 reachabilityMonitored:(BOOL)a1;

@end
