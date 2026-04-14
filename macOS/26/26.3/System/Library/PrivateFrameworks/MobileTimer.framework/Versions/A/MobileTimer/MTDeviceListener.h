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

- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (id)init;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void).cxx_destruct;
- (BOOL)_hasBeenUnlockedSinceBoot;

@end
