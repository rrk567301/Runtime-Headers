@class NSString;

@interface HPDReachability : NSObject

@property struct __SCNetworkReachability { } *reachabilityRef;
@property (retain) NSString *hostName;
@property (copy) id /* block */ reachabilityChangedBlock;

+ (id)reachabilityWithHostName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (char)start;
- (void)stop;
- (char)isReachable;
- (char)isReachableWithConnectionFlags:(unsigned int)a0;
- (void)_delayedReachabilityCallback:(id)a0;
- (id)initWithHostName:(id)a0;
- (char)startWithReachabilityBlock:(id /* block */)a0;

@end
