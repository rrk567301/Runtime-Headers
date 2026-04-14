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
+ (BOOL)isProvisionallyEnrolledWithCloudConfig:(id)a0;
+ (id)canonicalConfigurationWithSupervision:(BOOL)a0;
+ (id)sharedConfiguration;

- (int)userMode;
- (BOOL)isSupervised;
- (id)mdmVersionProtocol;
- (BOOL)alreadySignedIntoFaceTime;
- (id)region;
- (id)initWithCloudConfigDetails:(id)a0;
- (id)enrollmentServerURL;
- (BOOL)isAwaitingConfiguration;
- (void)refreshDetailsFromDisk;
- (id)MAIDUsername;
- (id)languageScript;
- (id)skipSetupKeys;
- (BOOL)isTeslaEnrolled;
- (id)language;
- (id)tvProviderUserToken;
- (void).cxx_destruct;
- (BOOL)isStoredProfileInstalled;
- (id)enrollmentServerInfo;
- (BOOL)isRapidReturnToService;
- (id)enrollmentAnchorCertificates;
- (id)enrollmentServerSupportedFeatures;
- (id)lastDEPPushTokenHash;
- (id)provisionalEnrollmentExpirationDate;
- (BOOL)isMDMUnremovable;
- (id)diagnosticsUploadURL;
- (BOOL)hasMAIDCredential;
- (id)init;
- (id)migrationDeadline;
- (BOOL)shouldIgnoreMDMFromBackup;
- (BOOL)isProvisionallyEnrolled;
- (id)mdmServerUID;

@end
