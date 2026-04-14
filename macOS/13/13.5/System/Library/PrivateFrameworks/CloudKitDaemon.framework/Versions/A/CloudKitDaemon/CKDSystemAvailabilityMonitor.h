@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject

@property (retain, nonatomic) NSMutableSet *watcherWrappers;
@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (void)simulateFirstUnlockForUnitTests;
- (void)_clearVanishedWatchers;
- (void)_logAvailabilityDescription;
- (void)_systemMayNowBeReady;
- (void)assertAvailability:(unsigned long long)a0;
- (unsigned long long)currentAvailabilityState;
- (BOOL)registerWatcher:(id)a0;
- (void)removeNotifications;
- (void)resetToUnavailableForUnitTests;
- (void)simulateBuddyCompletedForUnitTests;

@end
