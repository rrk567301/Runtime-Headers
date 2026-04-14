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
+ (id)_provisionalEnrollmentExpirationDateFromCloudConfig:(id)a0;
+ (BOOL)isProvisionallyEnrolledWithCloudConfig:(id)a0;
+ (id)sharedConfiguration;

- (id)provisionalEnrollmentExpirationDate;
- (id)enrollmentServerInfo;
- (id)migrationDeadline;
- (id)skipSetupKeys;
- (BOOL)isProvisionallyEnrolled;
- (id)language;
- (id)mdmVersionProtocol;
- (id)tvProviderUserToken;
- (id)region;
- (id)mdmServerUID;
- (BOOL)isMDMUnremovable;
- (id)diagnosticsUploadURL;
- (BOOL)alreadySignedIntoFaceTime;
- (id)MAIDUsername;
- (id)initWithCloudConfigDetails:(id)a0;
- (BOOL)isStoredProfileInstalled;
- (id)enrollmentAnchorCertificates;
- (BOOL)isAwaitingConfiguration;
- (id)enrollmentServerURL;
- (void)refreshDetailsFromDisk;
- (BOOL)isTeslaEnrolled;
- (void).cxx_destruct;
- (id)languageScript;
- (int)userMode;
- (BOOL)hasMAIDCredential;
- (id)enrollmentServerSupportedFeatures;
- (BOOL)shouldIgnoreMDMFromBackup;
- (BOOL)isSupervised;
- (BOOL)isRapidReturnToService;
- (id)lastDEPPushTokenHash;
- (id)init;

@end
