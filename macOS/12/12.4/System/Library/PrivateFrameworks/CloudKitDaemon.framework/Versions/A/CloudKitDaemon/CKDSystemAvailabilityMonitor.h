@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject

@property (retain, nonatomic) NSMutableSet *watcherWrappers;
@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailablityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (unsigned long long)currentAvailabilityState;
- (void)_systemMayNowBeReady;
- (void)_logAvailabilityDescription;
- (void)removeNotifications;
- (void)_clearVanishedWatchers;
- (void)assertAvailability:(unsigned long long)a0;
- (BOOL)registerWatcher:(id)a0;
- (void)resetToUnavailableForUnitTests;
- (void)simulateBuddyCompletedForUnitTests;
- (void)simulateFirstUnlockForUnitTests;

@end
