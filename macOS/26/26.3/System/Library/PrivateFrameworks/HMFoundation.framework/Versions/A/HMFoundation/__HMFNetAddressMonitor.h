@class HMFNetAddress, NSObject;
@protocol OS_dispatch_queue;

@interface __HMFNetAddressMonitor : HMFNetMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetAddress *_netAddress;
}

@property (readonly, nonatomic) struct __SCNetworkReachability { } *networkReachabilityRef;
@property (nonatomic) unsigned int currentNetworkFlags;

- (id)netAddress;
- (id)initWithNetService:(id)a0;
- (id)shortDescription;
- (unsigned long long)reachabilityPath;
- (void)handleNetworkReachabilityChange:(unsigned int)a0;
- (id)logIdentifier;
- (id)init;
- (id)initWithNetAddress:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)dealloc;

@end
