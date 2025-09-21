@class NSURL, NSUUID, NSArray, NSString, NSData, NSDictionary, NSNumber;

@interface MDMConfiguration : MDMConfigurationBase <MDMConfigurationProtocol, MDMConfigurationProperties>

@property (retain, nonatomic) NSUUID *wallpaperConfigurationUUID;
@property (nonatomic) BOOL memberQueueIsADEProfile;
@property (nonatomic) BOOL memberQueueIsProfileLocked;
@property (nonatomic) BOOL memberQueueIsUserEnrollment;
@property (nonatomic) BOOL memberQueuePinningRevocationCheckRequired;
@property (nonatomic) BOOL memberQueueSignMessage;
@property (nonatomic) BOOL memberQueueSupportUserChannel;
@property (nonatomic) BOOL memberQueueUseDevelopmentAPNS;
@property (nonatomic) unsigned long long memberQueueAccessRights;
@property (nonatomic) struct __SecIdentity { } *memberQueueIdentity;
@property (copy, nonatomic) NSArray *memberQueueServerCapabilities;
@property (retain, nonatomic) NSString *memberQueuePersonaID;
@property (retain, nonatomic) NSArray *memberQueueCheckInPinnedSecCertificateRefs;
@property (retain, nonatomic) NSData *memberQueueIdentityPersistentID;
@property (retain, nonatomic) NSDictionary *memberQueueMDMOptions;
@property (retain, nonatomic) NSDictionary *memberQueueOrganizationInfo;
@property (retain, nonatomic) NSNumber *memberQueuePollingInterval;
@property (retain, nonatomic) NSString *memberQueueEASEnrollmentID;
@property (retain, nonatomic) NSString *memberQueueEnrollmentID;
@property (retain, nonatomic) NSString *memberQueueEnrollmentMode;
@property (retain, nonatomic) NSString *memberQueueManagingProfileIdentifier;
@property (retain, nonatomic) NSString *memberQueuePushMagic;
@property (retain, nonatomic) NSString *memberQueueRMAccountID;
@property (retain, nonatomic) NSString *memberQueueTopic;
@property (retain, nonatomic) NSURL *memberQueueCheckInURL;
@property (retain, nonatomic) NSURL *memberQueueServerURL;
@property (readonly) unsigned long long accessRights;
@property (readonly) NSArray *checkInPinnedSecCertificateRefs;
@property (readonly) NSURL *checkInURL;
@property (readonly) NSString *easEnrollmentID;
@property (readonly) NSString *enrollmentID;
@property (readonly) NSString *enrollmentMode;
@property (readonly) BOOL isADEProfile;
@property (readonly) BOOL isProfileLocked;
@property (readonly) BOOL isUserEnrollment;
@property (readonly) NSString *managingProfileIdentifier;
@property (readonly) NSDictionary *organizationInfo;
@property (readonly) NSString *personaID;
@property (readonly) BOOL pinningRevocationCheckRequired;
@property (readonly) NSString *pushMagic;
@property (readonly) NSString *rmAccountID;
@property (readonly) NSArray *serverCapabilities;
@property (readonly) NSURL *serverURL;
@property (readonly) BOOL signMessage;
@property (readonly) BOOL supportUserChannel;
@property (readonly) NSString *topic;

+ (id)_failedToConvertTokenDataError;
+ (void)getOrgTokenForMAIDWithCompletionHandler:(id /* block */)a0;
+ (BOOL)hasIncompleteMigration;
+ (unsigned long long)getManagementStateForMAID;
+ (id)getUnhidableAndUnlockableApps;
+ (id)getUnhidableApps;
+ (void)getWatchPairingTokenForPhoneID:(id)a0 watchID:(id)a1 securityToken:(id)a2 completionHandler:(id /* block */)a3;
+ (id)getUnlockableApps;
+ (id)getOrgTokenForMAID:(id *)a0;
+ (BOOL)isUserEnrollmentDisregardingIdentityPresence;
+ (BOOL)isDataSeparated;
+ (BOOL)isRapidReturnToService;
+ (id)sharedConfiguration;

- (unsigned long long)channelType;
- (id)fetchUnhidableAndUnlockableApps;
- (void)memberQueueForgetCurrentConfiguration;
- (BOOL)memberQueueReadConfigurationOutError:(id *)a0;
- (struct __SecIdentity { } *)copyMemberQueueIdentity;
- (void).cxx_destruct;

@end
