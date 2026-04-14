@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDMCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)language;
- (id)region;
- (int)userMode;
- (BOOL)isAwaitingConfiguration;
- (BOOL)isSupervised;
- (void)refreshDetailsFromDisk;
- (id)provisionalEnrollmentExpirationDate;
- (BOOL)isTeslaEnrolled;
- (BOOL)isMDMUnremovable;
- (id)mdmVersionProtocol;
- (id)diagnosticsUploadURL;
- (id)MAIDUsername;
- (BOOL)hasMAIDCredential;
- (BOOL)alreadySignedIntoFaceTime;
- (id)languageScript;
- (BOOL)isProvisionallyEnrolled;
- (id)tvProviderUserToken;
- (id)skipSetupKeys;
- (id)enrollmentServerInfo;
- (id)enrollmentServerURL;
- (id)enrollmentAnchorCertificates;
- (id)enrollmentServerSupportedFeatures;

@end
