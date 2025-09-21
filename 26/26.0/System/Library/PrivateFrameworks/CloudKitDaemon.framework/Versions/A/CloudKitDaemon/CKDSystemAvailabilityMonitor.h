@class NSMutableArray;

@interface CKDSystemAvailabilityMonitor : NSObject {
    NSMutableArray *_watcherWrappersInRegistrationOrder;
}

@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;

+ (id)sharedMonitor;
+ (void)initialize;

- (id)availabilityDescription;
- (void)assertAvailability:(unsigned long long)a0;
- (void)dealloc;
- (void)_systemMayNowBeReady;
- (void)_logAvailabilityDescription;
- (void)removeNotifications;
- (void)_clearVanishedWatchers;
- (BOOL)registerWatcher:(id)a0;
- (void)resetToUnavailableForUnitTests;
- (void)simulateBuddyCompletedForUnitTests;
- (id)initInternal;
- (unsigned long long)currentAvailabilityState;
- (void)simulateFirstUnlockForUnitTests;
- (void).cxx_destruct;

@end
