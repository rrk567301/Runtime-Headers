@class NSString;

@interface HPDReachability : NSObject

@property struct __SCNetworkReachability { } *reachabilityRef;
@property (retain) NSString *hostName;
@property (copy) id /* block */ reachabilityChangedBlock;

+ (id)reachabilityWithHostName:(id)a0;

- (BOOL)isReachable;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)start;
- (id)initWithHostName:(id)a0;
- (void)dealloc;
- (BOOL)isReachableWithConnectionFlags:(unsigned int)a0;
- (void)_delayedReachabilityCallback:(id)a0;
- (BOOL)startWithReachabilityBlock:(id /* block */)a0;

@end
