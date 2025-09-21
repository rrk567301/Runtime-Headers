@class NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface TUCoreTelephonyClient : NSObject <TUEmergencyCoreTelephonyClient, TUTTYCoreTelephonyClient, TUCoreTelephonyClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CoreTelephonyClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)RTTTelephonyUtilitiesClass;
+ (Class)RTTSettingsClass;
+ (id)sharedRTTTelephonyUtilities;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (char)inEmergencyMode;
- (id)subscriptionForLabelIdentifier:(id)a0;
- (char)isDialAssistSupportedForSubscriptionLabelIdentifier:(id)a0 error:(id *)a1;
- (char)isEmergencyNumberForDigits:(id)a0 subscription:(id)a1 error:(id *)a2;
- (char)isEmergencyNumberForDigits:(id)a0 subscriptionUUID:(id)a1 error:(id *)a2;
- (char)isRTTSupportedForSubscription:(id)a0;
- (char)isRTTSupportedForSubscriptionUUID:(id)a0;
- (char)isTTYEnabledForSubscription:(id)a0;
- (char)isTTYEnabledForSubscriptionUUID:(id)a0;
- (char)isTTYHardwareAvailableForSubscription:(id)a0;
- (char)isTTYHardwareAvailableForSubscriptionUUID:(id)a0;
- (char)isTTYHardwareEnabledForSubscription:(id)a0;
- (char)isTTYHardwareEnabledForSubscriptionUUID:(id)a0;
- (char)isTTYHardwareSupportedForSubscription:(id)a0;
- (char)isTTYHardwareSupportedForSubscriptionUUID:(id)a0;
- (char)isTTYSoftwareAvailableForSubscription:(id)a0;
- (char)isTTYSoftwareAvailableForSubscriptionUUID:(id)a0;
- (char)isTTYSoftwareEnabledForSubscription:(id)a0;
- (char)isTTYSoftwareEnabledForSubscriptionUUID:(id)a0;
- (char)isTTYSoftwareSupportedForSubscription:(id)a0;
- (char)isTTYSoftwareSupportedForSubscriptionUUID:(id)a0;
- (char)isTTYSupportedForSubscription:(id)a0;
- (char)isTTYSupportedForSubscriptionUUID:(id)a0;
- (char)isWhitelistedEmergencyNumberForDigits:(id)a0 subscription:(id)a1 error:(id *)a2;
- (char)isWhitelistedEmergencyNumberForDigits:(id)a0 subscriptionUUID:(id)a1 error:(id *)a2;
- (id)objectForKey:(id)a0 subscriptionLabelIdentifier:(id)a1 error:(id *)a2;
- (unsigned long long)preferredTransportMethodForSubscription:(id)a0;
- (char)shouldShowEmergencyCallbackModeAlertForSubscription:(id)a0 error:(id *)a1;
- (char)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)a0 error:(id *)a1;
- (id)subscriptionForUUID:(id)a0;
- (id)testEmergencyHandleForSubscriptionLabelIdentifier:(id)a0 error:(id *)a1;

@end
