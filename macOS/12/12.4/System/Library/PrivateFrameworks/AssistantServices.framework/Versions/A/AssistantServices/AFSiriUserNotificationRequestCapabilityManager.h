@class NSObject, NSHashTable;
@protocol OS_dispatch_queue, AFAnnouncementRequestCapabilityProviding;

@interface AFSiriUserNotificationRequestCapabilityManager : NSObject <AFAnnouncementRequestCapabilityProvidingDelegate> {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    id<AFAnnouncementRequestCapabilityProviding> _capabilityProvider;
    long long _platform;
}

+ (id)sharedManager;
+ (BOOL)supportedByApplicationWithBundleID:(id)a0;
+ (Class)_classForPlatform:(long long)a0;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)provider:(id)a0 availableAnnouncementRequestTypesChanged:(unsigned long long)a1;
- (void)provider:(id)a0 eligibleAnnouncementRequestTypesChanged:(unsigned long long)a1;
- (BOOL)requestCanBeHandled;
- (BOOL)hasEligibleSetup;
- (id)_initWithPlatform:(long long)a0;
- (void)notifyObserversOfCurrentEligibleSetupState:(BOOL)a0 onPlatform:(long long)a1;
- (void)fetchEligibleSetupStateWithCompletion:(id /* block */)a0;
- (void)fetchRequestCanBeHandledStateWithCompletion:(id /* block */)a0;
- (void)notifyObserversOfCurrentRequestCanBeHandledState:(BOOL)a0 onPlatform:(long long)a1;

@end
