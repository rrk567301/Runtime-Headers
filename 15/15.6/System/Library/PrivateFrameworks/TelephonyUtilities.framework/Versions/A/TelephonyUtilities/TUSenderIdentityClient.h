@class NSObject;
@protocol OS_dispatch_queue, TUCoreTelephonyClient;

@interface TUSenderIdentityClient : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<TUCoreTelephonyClient> client;

- (id)init;
- (void).cxx_destruct;
- (char)isWhitelistedEmergencyNumberForDigits:(id)a0 senderIdentityUUID:(id)a1 error:(id *)a2;
- (char)inEmergencyMode;
- (char)isEmergencyNumberForDigits:(id)a0 senderIdentityUUID:(id)a1;
- (char)isEmergencyNumberForDigits:(id)a0 senderIdentityUUID:(id)a1 error:(id *)a2;
- (char)isRTTAvailableForSenderIdentityUUID:(id)a0;
- (char)isRTTSupportedForSenderIdentityUUID:(id)a0;
- (char)isTTYAvailableForSenderIdentityUUID:(id)a0;
- (char)isTTYEnabledForSenderIdentityUUID:(id)a0;
- (char)isTTYHardwareAvailableForSenderIdentityUUID:(id)a0;
- (char)isTTYHardwareEnabledForSenderIdentityUUID:(id)a0;
- (char)isTTYHardwareSupportedForSenderIdentityUUID:(id)a0;
- (char)isTTYSoftwareAvailableForSenderIdentityUUID:(id)a0;
- (char)isTTYSoftwareEnabledForSenderIdentityUUID:(id)a0;
- (char)isTTYSoftwareSupportedForSenderIdentityUUID:(id)a0;
- (char)isTTYSupportedForSenderIdentityUUID:(id)a0;
- (char)isWhitelistedEmergencyNumberForDigits:(id)a0 senderIdentityUUID:(id)a1;
- (char)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)a0;
- (char)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)a0 error:(id *)a1;
- (id)testEmergencyHandleForAccountUUID:(id)a0 error:(id *)a1;

@end
