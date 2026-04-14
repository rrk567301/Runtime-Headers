@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VSManagedProfileConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSMutableSet *observers;

+ (id)sharedConnection;

- (id)init;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)userToken;
- (long long)appAnalyticsAllowed;
- (long long)accountModificationAllowed;
- (long long)TVProviderModificationAllowed;
- (long long)appInstallationAllowed;
- (long long)UIAppInstallationAllowed;
- (long long)maximumAppsRating;
- (id)providerUniqueID;
- (void)refreshProfileWithCompletion:(id /* block */)a0;

@end
