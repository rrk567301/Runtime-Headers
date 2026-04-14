@class NSMutableArray;

@interface CKDSystemAvailabilityMonitor : NSObject {
    NSMutableArray *_watcherWrappersInRegistrationOrder;
}

@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (void)_systemMayNowBeReady;
- (id)initInternal;
- (id)availabilityDescription;
- (void)resetToUnavailableForUnitTests;
- (unsigned long long)currentAvailabilityState;
- (void)simulateBuddyCompletedForUnitTests;
- (void)simulateFirstUnlockForUnitTests;
- (void)_clearVanishedWatchers;
- (void).cxx_destruct;
- (void)_logAvailabilityDescription;
- (void)dealloc;
- (void)removeNotifications;
- (void)assertAvailability:(unsigned long long)a0;
- (BOOL)registerWatcher:(id)a0;

@end
