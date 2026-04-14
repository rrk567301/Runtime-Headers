@class NSString;

@interface HPDReachability : NSObject

@property struct __SCNetworkReachability { } *reachabilityRef;
@property (retain) NSString *hostName;
@property (copy) id /* block */ reachabilityChangedBlock;

+ (id)reachabilityWithHostName:(id)a0;

- (BOOL)isReachable;
- (BOOL)start;
- (void)dealloc;
- (void)stop;
- (id)initWithHostName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isReachableWithConnectionFlags:(unsigned int)a0;
- (void)_delayedReachabilityCallback:(id)a0;
- (BOOL)startWithReachabilityBlock:(id /* block */)a0;

@end
