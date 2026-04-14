@class NSString;
@protocol NAScheduler;

@interface MTDeviceListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener>

@property (retain, nonatomic) id<NAScheduler> workScheduler;
@property (nonatomic) BOOL internalHasBeenUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDeviceListener;
+ (BOOL)hasBeenUnlockedSinceBoot;
+ (BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;

- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (id)init;
- (BOOL)_hasBeenUnlockedSinceBoot;
- (void).cxx_destruct;

@end
