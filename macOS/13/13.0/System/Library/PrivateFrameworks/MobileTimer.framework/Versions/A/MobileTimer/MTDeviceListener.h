@class NSString;
@protocol NAScheduler;

@interface MTDeviceListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener>

@property (retain, nonatomic) id<NAScheduler> workScheduler;
@property (nonatomic) BOOL internalHasBeenUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasBeenUnlockedSinceBoot;
+ (id)sharedDeviceListener;
+ (BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (BOOL)_hasBeenUnlockedSinceBoot;

@end
