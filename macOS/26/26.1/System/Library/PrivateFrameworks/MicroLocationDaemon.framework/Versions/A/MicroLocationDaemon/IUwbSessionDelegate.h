@class NSString;

@interface IUwbSessionDelegate : NSObject <NISessionDelegate>

@property (nonatomic) void *uwbBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)session:(id)a0 didInvalidateWithError:(id)a1;
- (void)session:(id)a0 didUpdateNearbyObjects:(id)a1;
- (void)session:(id)a0 didRemoveNearbyObjects:(id)a1 withReason:(long long)a2;
- (void)sessionDidStartRunning:(id)a0;
- (void)sessionSuspensionEnded:(id)a0;
- (void)sessionWasSuspended:(id)a0;
- (void)session:(id)a0 didDiscoverNearbyObject:(id)a1;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (id)initWithUWBBridge:(void *)a0;

@end
