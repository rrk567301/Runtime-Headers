@class NSString;
@protocol NAScheduler;

@interface MTDeviceListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener>

@property (retain, nonatomic) id<NAScheduler> workScheduler;
@property (nonatomic) char internalHasBeenUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)hasBeenUnlockedSinceBoot;
+ (char)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
+ (id)sharedDeviceListener;

- (id)init;
- (void).cxx_destruct;
- (char)_hasBeenUnlockedSinceBoot;
- (id)gatherDiagnostics;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (char)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)printDiagnostics;

@end
