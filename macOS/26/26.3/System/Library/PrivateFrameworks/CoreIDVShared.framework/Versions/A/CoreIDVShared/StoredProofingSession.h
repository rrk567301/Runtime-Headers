@class NSString, NSSet, NSData, NSDate, StoredProofingDisplayMessage;

@interface StoredProofingSession : NSManagedObject

@property (nonatomic, copy) NSString *analyticsSessionID;
@property (nonatomic) BOOL canUploadOnExpensiveNetwork;
@property (nonatomic) long long cloudKitUploadsMaxRetryCount;
@property (nonatomic) long long connectToWifiReminderInDays;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic) BOOL didAttemptComboProofing;
@property (nonatomic) BOOL didNotifyOnUploadsCompletion;
@property (nonatomic) BOOL didShowWifiReminderAlert;
@property (nonatomic, copy) NSString *documentType;
@property (nonatomic, copy) NSString *extendedReviewURLString;
@property (nonatomic) BOOL hasUserConsentToShareBiomeData;
@property (nonatomic) long long issuerCurrentCredentialCapacity;
@property (nonatomic, copy) NSString *lastExecutedActionIdentifier;
@property (nonatomic, copy) NSString *learnMoreURLString;
@property (nonatomic, copy) NSData *livenessManualReviewEncryptedMessage;
@property (nonatomic) long long manualCheckInterval;
@property (nonatomic, copy) NSString *pairingID;
@property (nonatomic, copy) NSString *partnerSchemeID;
@property (nonatomic, copy) NSString *piiTokenIdentifier;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic) long long proofingActionStatus;
@property (nonatomic, copy) NSString *proofingSessionID;
@property (nonatomic, copy) NSDate *provisioningAttemptDate;
@property (nonatomic, copy) NSString *provisioningCredentialID;
@property (nonatomic) long long provisioningRetryTimeout;
@property (nonatomic, copy) NSString *provisioningTargetInstanceID;
@property (nonatomic, copy) NSData *serverAttestedProvisioningData;
@property (nonatomic) BOOL shouldScheduleUploads;
@property (nonatomic) BOOL shouldShowNotificationOnWatch;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSData *supplementalProvisioningData;
@property (nonatomic) long long target;
@property (nonatomic) long long totalUploadAssetsFileSizeInBytes;
@property (nonatomic, copy) NSString *workflowID;
@property (nonatomic, retain) StoredProofingDisplayMessage *proofingErrorMessage;
@property (nonatomic, retain) NSSet *uploadAssets;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
