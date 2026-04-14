@class NSString;

@interface HPDReachability : NSObject

@property struct __SCNetworkReachability { } *reachabilityRef;
@property (retain) NSString *hostName;
@property (copy) id /* block */ reachabilityChangedBlock;

+ (id)reachabilityWithHostName:(id)a0;

- (BOOL)start;
- (BOOL)isReachable;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithHostName:(id)a0;
- (BOOL)isReachableWithConnectionFlags:(unsigned int)a0;
- (void)_delayedReachabilityCallback:(id)a0;
- (BOOL)startWithReachabilityBlock:(id /* block */)a0;

@end
