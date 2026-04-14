@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject

@property (retain, nonatomic) NSMutableSet *watcherWrappers;
@property unsigned long long availabilityState;
@property unsigned long long simulatedavailabilityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (void)dealloc;
- (id)_init;
- (void).cxx_destruct;
- (void)removeNotifications;
- (void)assertAvailability:(unsigned long long)a0;
- (unsigned long long)currentAvailabilityState;
- (void)_logAvailabilityDescription;
- (void)_clearVanishedWatchers;
- (void)_systemMayNowBeReady;
- (BOOL)registerWatcher:(id)a0;
- (void)resetToUnavailableForUnitTests;
- (void)simulateBuddyCompletedForUnitTests;
- (void)simulateFirstUnlockForUnitTests;

@end
