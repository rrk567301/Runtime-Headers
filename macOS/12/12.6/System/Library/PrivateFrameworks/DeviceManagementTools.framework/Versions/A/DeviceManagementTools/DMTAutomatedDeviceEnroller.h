@class CATOperationQueue, NSString, NSData, NSError, DMTNetworkCredential;
@protocol DMTEnrollmentInformationPrimitives, DMTErasePrimitives, DMTNetworkingPrimitives, DMTAutomatedDeviceEnrollmentPrimitives, DMTProfileInstallationPrimitives, DMTPowerOffPrimitives;

@interface DMTAutomatedDeviceEnroller : NSObject <DMTEnrollmentPrerequisiteReceiving, DMTEnrollmentInitiating, DMTEnrollmentStateProviding, DMTEnrollmentOrganizationProviding, DMTEnrollmentNetworkNameProviding>

@property (readonly, nonatomic) id<DMTAutomatedDeviceEnrollmentPrimitives> enrollmentPrimitives;
@property (readonly, nonatomic) id<DMTEnrollmentInformationPrimitives> enrollmentInformationPrimitives;
@property (readonly, nonatomic) id<DMTNetworkingPrimitives> networkingPrimitives;
@property (readonly, nonatomic) id<DMTProfileInstallationPrimitives> profileInstallationPrimitives;
@property (readonly, nonatomic) id<DMTErasePrimitives> destructiveErasePrimitives;
@property (readonly, nonatomic) id<DMTErasePrimitives> nonDestructiveErasePrimitives;
@property (readonly, nonatomic) id<DMTPowerOffPrimitives> powerOffPrimitives;
@property (copy) NSString *organizationName;
@property long long organizationType;
@property (copy) NSString *networkName;
@property long long enrollmentState;
@property (retain) NSError *enrollmentError;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (copy, nonatomic) NSString *installedNetworkPayloadIdentifier;
@property (nonatomic, getter=isFinalized) BOOL finalized;
@property (copy, nonatomic) DMTNetworkCredential *networkCredential;
@property (copy, nonatomic) NSData *networkPayload;
@property (copy, nonatomic) NSString *enrollmentNonce;
@property (nonatomic) long long postEnrollmentBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)installProfile;
- (void)joinNetwork;
- (void)uninstallProfile;
- (id)initWithEnrollmentPrimitives:(id)a0 enrollmentInformationPrimitives:(id)a1 networkingPrimitives:(id)a2 profileInstallationPrimitives:(id)a3 destructiveErasePrimitives:(id)a4 nonDestructiveErasePrimitives:(id)a5 powerOffPrimitives:(id)a6;
- (BOOL)isDontShareConfiguration;
- (void)eraseCurrentNetworkIfNeeded;
- (void)eraseAndRestartWithExternalError:(id)a0;
- (void)eraseAndShutDownWithExternalError:(id)a0;
- (void)enrollDevice;
- (void)eraseAllContentAndSettingsWithExternalError:(id)a0;
- (void)disassociateWiFi;
- (void)timeoutOperationDidFinish:(id)a0;
- (void)tearDownWithFatalError:(id)a0;
- (void)verifyProfile;
- (void)waitForReachabilityWithTimeout:(double)a0;
- (void)joinNetworkUsingCredentials;
- (void)profileInstallationDidFinish:(id)a0;
- (void)profileUninstallDidFinish:(id)a0;
- (void)didJoinNetworkWithSuccess:(BOOL)a0 error:(id)a1;
- (void)didDisassociateFromNetworkWithSuccess:(BOOL)a0 error:(id)a1;
- (void)enrollmentCompleteWithResponse:(id)a0 error:(id)a1;
- (void)eraseAllContentAndSettingsDidFinishWithError:(id)a0;
- (void)setNetworkCredential:(id)a0 networkPayload:(id)a1 enrollmentNonce:(id)a2 postEnrollmentBehavior:(long long)a3 organizationName:(id)a4 organizationType:(long long)a5;
- (void)beginAutomatedDeviceEnrollment;

@end
