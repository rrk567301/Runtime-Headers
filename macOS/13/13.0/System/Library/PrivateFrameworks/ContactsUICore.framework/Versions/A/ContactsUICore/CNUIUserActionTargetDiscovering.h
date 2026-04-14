@class CNUIUserActionTargetDiscoveryCache, NSString;
@protocol CNSchedulerProvider, CNLSApplicationWorkspace, CNTUCallProviderManager, CNCapabilities, CNMCProfileConnection;

@interface CNUIUserActionTargetDiscovering : NSObject <CNUIUserActionTargetDiscovering>

@property (readonly, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly, nonatomic) id<CNTUCallProviderManager> callProviderManager;
@property (readonly, nonatomic) id<CNMCProfileConnection> profileConnection;
@property (readonly, nonatomic) id<CNCapabilities> capabilities;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNSchedulerProvider> highLatencySchedulerProvider;
@property (readonly, nonatomic) CNUIUserActionTargetDiscoveryCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (id)applicationProxiesForIntent:(id)a0 applicationWorkspace:(id)a1;
+ (BOOL)shouldIgnoreApplicationProxy:(id)a0;
+ (BOOL)isSkypeAvailableWithEnvironment:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)thirdPartyTargetsForActionTypes:(id)a0;
- (id)observableForTargetsChangedForActionType:(id)a0 schedulerProvider:(id)a1;
- (id)targetsForActionType:(id)a0;
- (id)thirdPartyTargetsForBundleIdentifier:(id)a0;
- (id)initWithApplicationWorkspace:(id)a0 callProviderManager:(id)a1 profileConnection:(id)a2 schedulerProvider:(id)a3 highLatencySchedulerProvider:(id)a4 capabilities:(id)a5;
- (void)resetTargetsForActionType:(id)a0;
- (id)_targetsForActionType:(id)a0;
- (id)targetsForEmail;
- (id)targetsForPay;
- (id)targetsForDirections;
- (id)targetsForVoice;
- (id)targetsForVideo;
- (id)targetsForText;
- (id)targetForVoiceWithTelephony;
- (id)targetForTextWithMessages;
- (id)targetForVoiceWithFaceTime;
- (id)targetForVideoWithFaceTime;
- (id)targetForVoiceWithSkype;
- (id)targetForVideoWithSkype;
- (id)targetForTextWithSkype;
- (id)targetsForVoiceWithThirdPartyCallProviders;
- (id)targetsForVideoWithThirdPartyCallProviders;
- (id)targetsForStartAudioCallIntent;
- (id)targetsForStartVideoCallIntent;
- (id)targetsForSendMessageIntent;

@end
