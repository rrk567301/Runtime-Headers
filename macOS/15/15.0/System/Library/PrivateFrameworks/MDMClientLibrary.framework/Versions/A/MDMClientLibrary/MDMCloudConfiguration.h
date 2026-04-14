@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDMCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;
+ (id)canonicalConfigurationWithSupervision:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)language;
- (id)region;
- (int)userMode;
- (BOOL)isAwaitingConfiguration;
- (BOOL)isSupervised;
- (BOOL)isStoredProfileInstalled;
- (void)refreshDetailsFromDisk;
- (BOOL)isTeslaEnrolled;
- (BOOL)isProvisionallyEnrolled;
- (id)MAIDUsername;
- (BOOL)alreadySignedIntoFaceTime;
- (id)diagnosticsUploadURL;
- (id)enrollmentAnchorCertificates;
- (id)enrollmentServerInfo;
- (id)enrollmentServerSupportedFeatures;
- (id)enrollmentServerURL;
- (BOOL)hasMAIDCredential;
- (BOOL)isMDMUnremovable;
- (id)languageScript;
- (id)lastDEPPushTokenHash;
- (id)mdmVersionProtocol;
- (id)provisionalEnrollmentExpirationDate;
- (id)skipSetupKeys;
- (id)tvProviderUserToken;

@end
