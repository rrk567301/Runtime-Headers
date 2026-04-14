@class NSMutableArray;

@interface CKDSystemAvailabilityMonitor : NSObject {
    NSMutableArray *_watcherWrappersInRegistrationOrder;
}

@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (void)resetToUnavailableForUnitTests;
- (BOOL)registerWatcher:(id)a0;
- (id)initInternal;
- (id)availabilityDescription;
- (void)removeNotifications;
- (void)assertAvailability:(unsigned long long)a0;
- (void)_clearVanishedWatchers;
- (unsigned long long)currentAvailabilityState;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_systemMayNowBeReady;
- (void)simulateFirstUnlockForUnitTests;
- (void)_logAvailabilityDescription;
- (void)simulateBuddyCompletedForUnitTests;

@end
