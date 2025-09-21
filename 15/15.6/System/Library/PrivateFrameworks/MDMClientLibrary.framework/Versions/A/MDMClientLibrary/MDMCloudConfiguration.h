@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDMCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (nonatomic) char isSingleton;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;
+ (char)isProvisionallyEnrolledWithCloudConfig:(id)a0;
+ (id)_provisionalEnrollmentExpirationDateFromCloudConfig:(id)a0;
+ (id)canonicalConfigurationWithSupervision:(char)a0;

- (id)init;
- (void).cxx_destruct;
- (id)language;
- (id)region;
- (int)userMode;
- (char)isAwaitingConfiguration;
- (char)isSupervised;
- (char)isStoredProfileInstalled;
- (char)isTeslaEnrolled;
- (char)isProvisionallyEnrolled;
- (id)MAIDUsername;
- (char)alreadySignedIntoFaceTime;
- (id)diagnosticsUploadURL;
- (id)enrollmentAnchorCertificates;
- (id)enrollmentServerInfo;
- (id)enrollmentServerSupportedFeatures;
- (id)enrollmentServerURL;
- (char)hasMAIDCredential;
- (id)initWithCloudConfigDetails:(id)a0;
- (char)isMDMUnremovable;
- (char)isRapidReturnToService;
- (id)languageScript;
- (id)lastDEPPushTokenHash;
- (id)mdmServerUID;
- (id)mdmVersionProtocol;
- (id)provisionalEnrollmentExpirationDate;
- (void)refreshDetailsFromDisk;
- (id)skipSetupKeys;
- (id)tvProviderUserToken;

@end
