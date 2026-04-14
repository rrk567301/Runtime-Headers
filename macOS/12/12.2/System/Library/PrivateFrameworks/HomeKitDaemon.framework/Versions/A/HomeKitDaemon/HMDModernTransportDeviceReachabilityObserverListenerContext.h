@class NSNumber, NSHashTable;

@interface HMDModernTransportDeviceReachabilityObserverListenerContext : NSObject

@property (readonly, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSNumber *reachability;

- (id)init;
- (void).cxx_destruct;

@end
