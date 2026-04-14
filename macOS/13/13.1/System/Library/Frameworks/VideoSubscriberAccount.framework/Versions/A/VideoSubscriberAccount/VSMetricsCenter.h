@class NSObject, VSSetTopBoxProfile, NSString, NSOperationQueue, VSIdentityProvider, VSRemoteNotifier, VSPreferences;
@protocol OS_dispatch_queue;

@interface VSMetricsCenter : NSObject <VSRemoteNotifierDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (nonatomic) BOOL optedIn;
@property (retain, nonatomic) VSIdentityProvider *currentIdentityProvider;
@property (nonatomic) BOOL currentIdentityProviderSupportsSTB;
@property (nonatomic) BOOL currentIdentityProviderIsFullySupported;
@property (nonatomic) BOOL fetchedSetTopBoxProfile;
@property (retain, nonatomic) VSSetTopBoxProfile *stbProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMetricsCenter;

- (id)init;
- (void).cxx_destruct;
- (id)userID;
- (void)accountStoreDidChange;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void)profileConnectionSettingsChanged:(id)a0;
- (void)profileConnectionProfileChanged:(id)a0;
- (void)recordSignInEventWithProviderIdentifier:(id)a0 supportedProvider:(BOOL)a1 channelAdamID:(id)a2 error:(id)a3;
- (void)recordSignOutEventWithProviderIdentifier:(id)a0;
- (void)recordMetadataRequestWithProviderIdentifier:(id)a0 channelAdamID:(id)a1 error:(id)a2;
- (void)recordSTBOptOutEventWithError:(id)a0;
- (void)recordEnterEventWithPage:(id)a0 pageType:(id)a1;
- (void)recordExitEventWithPage:(id)a0 pageType:(id)a1;
- (void)recordClickEventWithPage:(id)a0 pageType:(id)a1 target:(id)a2;
- (void)recordInvalidTemplateErrorWithProviderAppAdamID:(id)a0;
- (void)recordFederatedPunchoutEventWithError:(id)a0 metadata:(id)a1;
- (void)recordNowPlayingBrokenEventWithBundleID:(id)a0;
- (void)fetchSetTopBoxProfile;
- (id)mutableBaseFields;
- (id)flexibleBaseFields;
- (BOOL)currentProviderIsSetTopBoxProvider;
- (BOOL)hasSetTopBoxProfile;
- (id)underlyingErrorsArray:(id)a0;

@end
