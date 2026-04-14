@class NSUUID, _HMContext, NSString;

@interface HMClientConnection : NSObject <HMFLogging>

@property (class, readonly, copy) NSUUID *UUID;

@property (readonly, getter=areHomesConfigured) BOOL homesConfigured;
@property BOOL shouldWeRetrySendingSignOutMessageToHomeKitDaemon;
@property (readonly) _HMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)areHomesConfigured;
+ (id)logCategory;
+ (id)siriCurrentHome;
+ (BOOL)areAnyAccessoriesConfigured;
+ (BOOL)areAnyAppleTVAccessoriesConfigured;
+ (BOOL)areAnyHomePodMiniConfigured;
+ (BOOL)areAnyHomePodsConfigured;
+ (BOOL)areAnyLargeHomePodConfigured;
+ (BOOL)areAnySpeakersConfigured;
+ (BOOL)areAnyTelevisionAccessoriesConfigured;
+ (id)siriHomeIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)_IDMSAccountUsernameModifiedWithCompletionHandler:(id /* block */)a0;
- (void)_primaryAccountDidChange:(id)a0 modified:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id /* block */)a0;
- (void)_retrySendingSignOutWithCompletion:(id /* block */)a0;
- (id)initWithAreHomesConfigured:(BOOL)a0;
- (id)initWithContext:(id)a0 areHomesConfigured:(BOOL)a1;
- (id)initWithNoValidation;
- (void)notifyAccountStatusUpdate:(unsigned long long)a0 accountIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)requestSiriSyncDataWithValidity:(id)a0 completion:(id /* block */)a1;
- (void)sendSiriCommand:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldRetrySendingSignOutMessageDueToError:(id)a0;

@end
