@class NSMutableArray;

@interface CKDSystemAvailabilityMonitor : NSObject {
    NSMutableArray *_watcherWrappersInRegistrationOrder;
}

@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (void)resetToUnavailableForUnitTests;
- (unsigned long long)currentAvailabilityState;
- (id)initInternal;
- (void)_clearVanishedWatchers;
- (BOOL)registerWatcher:(id)a0;
- (void).cxx_destruct;
- (void)removeNotifications;
- (void)simulateBuddyCompletedForUnitTests;
- (void)_systemMayNowBeReady;
- (void)assertAvailability:(unsigned long long)a0;
- (void)_logAvailabilityDescription;
- (void)simulateFirstUnlockForUnitTests;
- (id)availabilityDescription;
- (void)dealloc;

@end
