@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDMCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (nonatomic) BOOL isSingleton;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)canonicalConfigurationWithSupervision:(BOOL)a0;
+ (id)sharedConfiguration;
+ (id)_provisionalEnrollmentExpirationDateFromCloudConfig:(id)a0;
+ (BOOL)isProvisionallyEnrolledWithCloudConfig:(id)a0;

- (id)languageScript;
- (id)region;
- (id)mdmVersionProtocol;
- (id)language;
- (BOOL)shouldIgnoreMDMFromBackup;
- (BOOL)isRapidReturnToService;
- (id)initWithCloudConfigDetails:(id)a0;
- (BOOL)isSupervised;
- (int)userMode;
- (void)refreshDetailsFromDisk;
- (BOOL)isMDMUnremovable;
- (id)migrationDeadline;
- (id)enrollmentServerInfo;
- (id)enrollmentServerSupportedFeatures;
- (BOOL)isStoredProfileInstalled;
- (id)mdmServerUID;
- (id)diagnosticsUploadURL;
- (void).cxx_destruct;
- (id)provisionalEnrollmentExpirationDate;
- (BOOL)alreadySignedIntoFaceTime;
- (BOOL)isProvisionallyEnrolled;
- (BOOL)hasMAIDCredential;
- (BOOL)isAwaitingConfiguration;
- (id)MAIDUsername;
- (BOOL)isTeslaEnrolled;
- (id)init;
- (id)enrollmentAnchorCertificates;
- (id)skipSetupKeys;
- (id)lastDEPPushTokenHash;
- (id)tvProviderUserToken;
- (id)enrollmentServerURL;

@end
