@class HMFNetAddress, NSObject;
@protocol OS_dispatch_queue;

@interface __HMFNetAddressMonitor : HMFNetMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetAddress *_netAddress;
}

@property (readonly, nonatomic) struct __SCNetworkReachability { } *networkReachabilityRef;
@property (nonatomic) unsigned int currentNetworkFlags;

- (unsigned long long)reachabilityPath;
- (id)attributeDescriptions;
- (id)shortDescription;
- (id)initWithNetService:(id)a0;
- (id)initWithNetAddress:(id)a0;
- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)netAddress;
- (id)init;
- (void)handleNetworkReachabilityChange:(unsigned int)a0;

@end
