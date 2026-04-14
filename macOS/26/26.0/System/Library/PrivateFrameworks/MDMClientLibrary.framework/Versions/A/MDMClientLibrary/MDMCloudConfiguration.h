@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDMCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (nonatomic) BOOL isSingleton;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)_provisionalEnrollmentExpirationDateFromCloudConfig:(id)a0;
+ (id)canonicalConfigurationWithSupervision:(BOOL)a0;
+ (id)sharedConfiguration;
+ (BOOL)isProvisionallyEnrolledWithCloudConfig:(id)a0;

- (id)tvProviderUserToken;
- (id)enrollmentServerInfo;
- (BOOL)hasMAIDCredential;
- (id)languageScript;
- (BOOL)isSupervised;
- (id)mdmVersionProtocol;
- (BOOL)isMDMUnremovable;
- (id)skipSetupKeys;
- (id)language;
- (id)init;
- (id)MAIDUsername;
- (id)lastDEPPushTokenHash;
- (id)region;
- (void)refreshDetailsFromDisk;
- (BOOL)isStoredProfileInstalled;
- (BOOL)isAwaitingConfiguration;
- (id)provisionalEnrollmentExpirationDate;
- (BOOL)isProvisionallyEnrolled;
- (id)initWithCloudConfigDetails:(id)a0;
- (id)mdmServerUID;
- (id)enrollmentServerSupportedFeatures;
- (BOOL)isRapidReturnToService;
- (id)enrollmentServerURL;
- (BOOL)shouldIgnoreMDMFromBackup;
- (id)enrollmentAnchorCertificates;
- (id)diagnosticsUploadURL;
- (BOOL)isTeslaEnrolled;
- (BOOL)alreadySignedIntoFaceTime;
- (int)userMode;
- (void).cxx_destruct;
- (id)migrationDeadline;

@end
