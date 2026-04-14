@class NSString, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface TTYTelephonyUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate>

@property (nonatomic) BOOL headphoneJackSupportsTTY;
@property (retain, nonatomic) CoreTelephonyClient *telephonyClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyUpdateQueue;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *defaultVoiceContext;
@property (nonatomic) unsigned long long activeContextCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUtilityProvider;
+ (BOOL)relayIsSupported;
+ (BOOL)isRTTSupportedForContext:(id)a0;
+ (BOOL)isRTTSupported;
+ (BOOL)isTTYSupportedForContext:(id)a0;
+ (BOOL)isTTYSupported;
+ (BOOL)hardwareTTYIsSupportedForContext:(id)a0;
+ (BOOL)hardwareTTYIsSupported;
+ (BOOL)softwareTTYIsSupportedForContext:(id)a0;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)isAppleInternalBuild;
+ (BOOL)isOnlyRTTSupportedForContext:(id)a0;
+ (BOOL)shouldUseRTTForContext:(id)a0;
+ (id)relayPhoneNumber;
+ (BOOL)isOnlyRTTSupported;
+ (id)relayPhoneNumberForContext:(id)a0;
+ (BOOL)TTYHardwareEnabledForAnyActiveContext;
+ (BOOL)TTYSoftwareEnabledForAnyActiveContext;
+ (BOOL)shouldUseRTT;
+ (BOOL)relayIsSupportedForContext:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)subscriptionInfoDidChange;
- (void)activeSubscriptionsDidChange;
- (void)simLessSubscriptionsDidChange;
- (BOOL)contactIsTTYContact:(id)a0;
- (BOOL)relayIsSupported;
- (BOOL)isTTYSupportedForContext:(id)a0;
- (unsigned long long)currentPreferredTransportMethod;
- (void)reloadRelayPhoneNumbers;
- (BOOL)isTTYOverIMSSupportedForContext:(id)a0;
- (id)relayNumberForContext:(id)a0;
- (void)reloadDefaultVoiceContext;
- (id)phoneNumberForContext:(id)a0;
- (id)subscriptionContexts;
- (id)phoneNumberFromUUID:(id)a0;
- (void)carrierSettingsDidChange;
- (id)getCarrierValueForKeyHierarchy:(id)a0 andContext:(id)a1;
- (id)getCarrierValueForKey:(id)a0 andContext:(id)a1;
- (id)myPhoneNumber;
- (BOOL)contactPathIsMe:(id)a0;

@end
