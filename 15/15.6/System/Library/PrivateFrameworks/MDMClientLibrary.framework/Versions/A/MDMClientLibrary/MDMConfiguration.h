@class NSUUID, NSString, NSData, NSArray, NSURL, NSDictionary, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface MDMConfiguration : NSObject <MDMConfigurationProtocol>

@property (retain, nonatomic) NSUUID *wallpaperConfigurationUUID;
@property (nonatomic) char isUserEnrollment;
@property (nonatomic) char supportUserChannel;
@property (retain, nonatomic) NSString *enrollmentID;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSString *easEnrollmentID;
@property (retain, nonatomic) NSString *rmAccountID;
@property (retain, nonatomic) NSString *enrollmentMode;
@property (retain, nonatomic) NSData *identityPersistentID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSString *memberQueueManagingProfileIdentifier;
@property (nonatomic) struct __SecIdentity { } *memberQueueIdentity;
@property (retain, nonatomic) NSArray *memberQueueCheckInPinnedSecCertificateRefs;
@property (nonatomic) char memberQueuePinningRevocationCheckRequired;
@property (nonatomic) char memberQueueSignMessage;
@property (retain, nonatomic) NSString *memberQueueTopic;
@property (retain, nonatomic) NSDictionary *memberQueueOrganizationInfo;
@property (retain, nonatomic) NSNumber *memberQueuePollingInterval;
@property (retain, nonatomic) NSURL *memberQueueServerURL;
@property (retain, nonatomic) NSURL *memberQueueCheckInURL;
@property (copy, nonatomic) NSArray *memberQueueServerCapabilities;
@property (retain, nonatomic) NSDictionary *memberQueueMDMOptions;
@property (nonatomic) unsigned long long memberQueueAccessRights;
@property (nonatomic) char memberQueueUseDevelopmentAPNS;
@property (retain, nonatomic) NSString *memberQueuePushMagic;
@property (readonly) char isProfileLocked;

+ (char)isDataSeparated;
+ (id)sharedConfiguration;
+ (id)_emptyTokenErrorWithUnderlayingError:(id)a0;
+ (unsigned long long)getManagementStateForMAID;
+ (id)getOrgTokenForMAID:(id *)a0;
+ (id)getTokenUnsupportedError;
+ (id)getUnhidableAndUnlockableApps;
+ (id)getUnhidableApps;
+ (id)getUnlockableApps;
+ (id)getWatchPairingTokenForPhoneID:(id)a0 watchID:(id)a1 securityToken:(id)a2 outError:(id *)a3;
+ (char)isGetTokenSupportedByServer;
+ (char)isRapidReturnToService;
+ (char)isUserEnrollmentDisregardingIdentityPresence;

- (id)init;
- (void).cxx_destruct;
- (id)fetchUnhidableAndUnlockableApps;
- (id)_mdmPropertiesFilePathForChannelType:(unsigned long long)a0;
- (id)_readPropertiesForChannelType:(unsigned long long)a0 createIfMissingFile:(char)a1 error:(id *)a2;
- (char)_writeProperties:(id)a0 channelType:(unsigned long long)a1 error:(id *)a2;
- (struct __SecIdentity { } *)copyMemberQueueIdentity;
- (id)getPropertyForKey:(id)a0 channelType:(unsigned long long)a1;
- (void)memberQueueForgetCurrentConfiguration;
- (char)readConfigurationOutError:(id *)a0;
- (void)refreshDetailsFromDisk;
- (id)setPropertyForKey:(id)a0 value:(id)a1 channelType:(unsigned long long)a2;

@end
