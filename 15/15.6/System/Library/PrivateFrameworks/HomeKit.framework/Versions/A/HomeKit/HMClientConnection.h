@class NSUUID, _HMContext, NSURL, NSString;

@interface HMClientConnection : NSObject <HMFLogging>

@property (class, readonly, copy) NSUUID *UUID;
@property (class, readonly) char areAnyAccessoriesConfigured;
@property (class, readonly) char areAnyHomePodMiniConfigured;
@property (class, readonly) char areAnyLargeHomePodConfigured;
@property (class, readonly) char areAnyHomePodsConfigured;
@property (class, readonly) char areAnyTelevisionAccessoriesConfigured;
@property (class, readonly) char areAnyAppleTVAccessoriesConfigured;
@property (class, readonly) char areHomesConfigured;
@property (class, readonly, copy) NSUUID *currentHomeUniqueIdentifier;
@property (class, readonly, copy) NSURL *siriHomeIdentifier;

@property (readonly, getter=areHomesConfigured) char homesConfigured;
@property char shouldWeRetrySendingSignOutMessageToHomeKitDaemon;
@property (readonly) _HMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;
+ (id)siriCurrentHome;
+ (char)areAnySpeakersConfigured;

- (id)init;
- (void).cxx_destruct;
- (void)_IDMSAccountUsernameModifiedWithCompletionHandler:(id /* block */)a0;
- (void)_primaryAccountDidChange:(id)a0 modified:(char)a1 completionHandler:(id /* block */)a2;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id /* block */)a0;
- (void)_retrySendingSignOutWithCompletion:(id /* block */)a0;
- (void)fetchHH1EOLStatusForResidentDevice:(id)a0 completion:(id /* block */)a1;
- (id)initWithAreHomesConfigured:(char)a0;
- (id)initWithContext:(id)a0 areHomesConfigured:(char)a1;
- (id)initWithNoValidation;
- (void)notifyAccountStatusUpdate:(unsigned long long)a0 accountIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)requestSiriSyncDataWithValidity:(id)a0 completion:(id /* block */)a1;
- (void)sendSiriCommand:(id)a0 completionHandler:(id /* block */)a1;
- (char)shouldRetrySendingSignOutMessageDueToError:(id)a0;

@end
