@class CoreTelephonyClient, TUUserConfiguration;
@protocol TUCarrierBundleControllerProtocol, TUConfigurationProviderNotifier, TUConfigurationProviderDelegate;

@interface TUConfigurationProvider : NSObject

@property (readonly, nonatomic) TUUserConfiguration *userConfiguration;
@property (readonly, nonatomic) id<TUConfigurationProviderNotifier> configurationProviderNotifier;
@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) id<TUCarrierBundleControllerProtocol> carrierBundleController;
@property (weak, nonatomic) id<TUConfigurationProviderDelegate> delegate;
@property (readonly, nonatomic, getter=isSIMAvailable) char simAvailable;
@property (readonly, nonatomic, getter=isIncomingCallsAvailableForPhone) char incomingCallsAvailableForPhone;
@property (readonly, nonatomic, getter=isCallAnnouncementAvailableForPhone) char callAnnouncementAvailableForPhone;
@property (readonly, nonatomic, getter=isMyNumberAvailable) char myNumberAvailable;
@property (readonly, nonatomic, getter=isCallReportingAvailable) char callReportingAvailable;
@property (readonly, nonatomic, getter=isShareNameAndPhotosAvailable) char shareNameAndPhotosAvailable;
@property (readonly, nonatomic, getter=isWiFiCallingAvailable) char wiFiCallingAvailable;
@property (readonly, nonatomic, getter=isRelayPrimaryAvailable) char relayPrimaryAvailable;
@property (readonly, nonatomic, getter=isRelaySecondaryAvailable) char relaySecondaryAvailable;
@property (readonly, nonatomic, getter=isRespondwithTextAvailable) char respondwithTextAvailable;
@property (readonly, nonatomic, getter=isCallForwardingAvailable) char callForwardingAvailable;
@property (readonly, nonatomic, getter=isCallWaitingAvailable) char callWaitingAvailable;
@property (readonly, nonatomic, getter=isShowMyCallerIDAvailable) char showMyCallerIDAvailable;
@property (readonly, nonatomic, getter=isCallScreeningAvailable) char callScreeningAvailable;
@property (readonly, nonatomic, getter=isBrandedCallingAvailable) char brandedCallingAvailable;
@property (readonly, nonatomic, getter=isBusinessConnectCallingAvailable) char businessConnectCallingAvailable;
@property (readonly, nonatomic, getter=isLiveLookupAvailable) char liveLookupAvailable;
@property (readonly, nonatomic, getter=isCallBlockingAndIdentificationAvailable) char callBlockingAndIdentificationAvailable;
@property (readonly, nonatomic, getter=isBlockedContactsAvailable) char blockedContactsAvailable;
@property (readonly, nonatomic, getter=isILClassificationAvailable) char iLClassificationAvailable;
@property (readonly, nonatomic, getter=isDialAssistAvailable) char dialAssistAvailable;
@property (readonly, nonatomic, getter=isCallIdentificationAppsAvailable) char callIdentificationAppsAvailable;
@property (readonly, nonatomic, getter=isSilenceJunkCallingAvailable) char silenceJunkCallingAvailable;
@property (nonatomic, getter=isCallScreeningEnabled, setter=setCallScreeningEnabled:) char callScreeningEnabled;
@property (nonatomic, getter=isSilenceUnknownCallersEnabledForPhone, setter=setSilenceUnknownCallersEnabledForPhone:) char silenceUnknownCallersEnabledForPhone;
@property (nonatomic, getter=isSilenceUnknownCallersEnabledForFaceTime, setter=setSilenceUnknownCallersEnabledForFaceTime:) char silenceUnknownCallersEnabledForFaceTime;
@property (nonatomic, getter=isSilenceJunkCallingEnabled, setter=setSilenceJunkCallingEnabled:) char silenceJunkCallingEnabled;
@property (nonatomic, getter=isBusinessConnectCallingEnabled, setter=setBusinessConnectCallingEnabled:) char businessConnectCallingEnabled;
@property (readonly, nonatomic, getter=isFaceTimeEnabledInSettings) char faceTimeEnabledInSettings;
@property (readonly, nonatomic, getter=isIncomingCallsAvailableForFaceTime) char incomingCallsAvailableForFaceTime;
@property (readonly, nonatomic, getter=isCallAnnouncementAvailableForFaceTime) char callAnnouncementAvailableForFaceTime;
@property (readonly, nonatomic, getter=isSharePlayAvailable) char sharePlayAvailable;
@property (readonly, nonatomic, getter=isAutomaticProminenceAvailable) char automaticProminenceAvailable;
@property (readonly, nonatomic, getter=isLivePhotosAvailable) char livePhotosAvailable;
@property (readonly, nonatomic, getter=isSIMPINAvailable) char simPINAvailable;
@property (readonly, nonatomic, getter=isNetworkSelectionAvailable) char networkSelectionAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNotifier:(id)a0;
- (char)isBrandedCallingEnabled:(char)a0;
- (char)isSystemCapabilityAvailableForName:(id)a0;
- (id)objectForKeyHierarchy:(id)a0 subscriptionContext:(id)a1 error:(id *)a2;
- (void)postConfigurationChangedNotification;
- (void)setBrandedCallingEnabled:(char)a0 primary:(char)a1;
- (id)stringForKeyHierarchy:(id)a0 subscriptionContext:(id)a1 error:(id *)a2;
- (char)supportsBrandedCallingForSubscriptionContext:(id)a0;
- (char)supportsBusinessConnectCallingForSubscriptionContext:(id)a0;
- (char)supportsCallBlockingForSubscriptionContext:(id)a0;
- (char)supportsDialAssistForSubscriptionContext:(id)a0;
- (char)supportsSystemCapabilityWithName:(id)a0 subscriptionContext:(id)a1;
- (id)systemCapabilitiesForSubscriptionContext:(id)a0;

@end
