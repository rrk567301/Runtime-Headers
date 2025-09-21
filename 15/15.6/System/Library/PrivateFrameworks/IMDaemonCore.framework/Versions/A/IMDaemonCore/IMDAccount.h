@class NSString, NSDictionary, NSMutableDictionary, IMDService, IMDServiceSession, NSArray;

@interface IMDAccount : NSObject <IMSystemMonitorListener, IMAccount>

@property (nonatomic, getter=isLoading) char loading;
@property (nonatomic) char wasDisabledAutomatically;
@property (readonly, nonatomic) char shouldPublishNowPlaying;
@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *loginID;
@property (retain, nonatomic) IMDService *service;
@property (retain, nonatomic) IMDServiceSession *session;
@property (nonatomic) unsigned long long loginStatus;
@property (nonatomic) int serviceDisconnectReason;
@property (copy, nonatomic) NSString *serviceLoginStatusMessage;
@property (readonly, nonatomic) int registrationError;
@property (readonly, retain, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, nonatomic) NSMutableDictionary *accountDefaults;
@property (readonly, copy, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) NSArray *replicationSessions;
@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, nonatomic, getter=isDisabled) char disabled;
@property (nonatomic, getter=isManaged) char managed;
@property (readonly, nonatomic) char canMakeDowngradeRoutingChecks;
@property (readonly, nonatomic) long long registrationStatus;
@property (readonly, nonatomic) long long accountType;
@property (readonly, nonatomic) long long profileValidationStatus;
@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) char isRegistered;
@property (readonly, nonatomic) char isSMSRelayCapable;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)profileInfo;
- (void)setIsManaged:(char)a0;
- (char)_isUsableForSending;
- (void)_createReplicationSessionsIfNecessary;
- (void)_forceSetLoginStatus:(unsigned long long)a0 message:(id)a1 reason:(int)a2 properties:(id)a3;
- (id)_registrationInfo;
- (id)accountInfoToPost;
- (void)createSessionIfNecessary;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2;
- (char)isAccountKeyCDPSyncingOrWaitingForUser;
- (void)postAccountCapabilities;
- (void)releaseSession;
- (void)resetReplicationSessions;
- (void)setLoginStatus:(unsigned long long)a0 message:(id)a1;
- (void)setLoginStatus:(unsigned long long)a0 message:(id)a1 reason:(int)a2 properties:(id)a3;
- (void)setRegistrationStatus:(long long)a0 error:(int)a1 alertInfo:(id)a2;
- (void)writeAccountDefaults:(id)a0;

@end
