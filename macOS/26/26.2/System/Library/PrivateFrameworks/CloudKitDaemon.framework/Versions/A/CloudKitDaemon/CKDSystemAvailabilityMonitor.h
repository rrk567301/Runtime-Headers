@class NSMutableArray;

@interface CKDSystemAvailabilityMonitor : NSObject {
    NSMutableArray *_watcherWrappersInRegistrationOrder;
}

@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (id)availabilityDescription;
- (void)_logAvailabilityDescription;
- (void)_clearVanishedWatchers;
- (void)assertAvailability:(unsigned long long)a0;
- (BOOL)registerWatcher:(id)a0;
- (void)removeNotifications;
- (void).cxx_destruct;
- (void)_systemMayNowBeReady;
- (void)simulateBuddyCompletedForUnitTests;
- (void)simulateFirstUnlockForUnitTests;
- (void)resetToUnavailableForUnitTests;
- (unsigned long long)currentAvailabilityState;
- (id)initInternal;
- (void)dealloc;

@end
