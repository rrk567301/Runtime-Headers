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
+ (BOOL)isProvisionallyEnrolledWithCloudConfig:(id)a0;
+ (id)sharedConfiguration;
+ (id)_provisionalEnrollmentExpirationDateFromCloudConfig:(id)a0;

- (id)tvProviderUserToken;
- (id)mdmServerUID;
- (id)enrollmentAnchorCertificates;
- (id)skipSetupKeys;
- (id)region;
- (id)enrollmentServerInfo;
- (id)lastDEPPushTokenHash;
- (void)refreshDetailsFromDisk;
- (id)init;
- (int)userMode;
- (id)initWithCloudConfigDetails:(id)a0;
- (id)language;
- (BOOL)shouldIgnoreMDMFromBackup;
- (id)mdmVersionProtocol;
- (id)diagnosticsUploadURL;
- (id)enrollmentServerSupportedFeatures;
- (void).cxx_destruct;
- (BOOL)isSupervised;
- (BOOL)hasMAIDCredential;
- (id)enrollmentServerURL;
- (BOOL)isAwaitingConfiguration;
- (BOOL)isProvisionallyEnrolled;
- (id)provisionalEnrollmentExpirationDate;
- (BOOL)isMDMUnremovable;
- (BOOL)alreadySignedIntoFaceTime;
- (id)MAIDUsername;
- (BOOL)isTeslaEnrolled;
- (id)languageScript;
- (BOOL)isRapidReturnToService;
- (BOOL)isStoredProfileInstalled;
- (id)migrationDeadline;

@end
