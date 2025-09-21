@class NSString, SMSystem_Client;

@interface SMMacUser_Client : SMUser_Client

@property (retain) SMSystem_Client *sourceSystem;
@property char isAdminUser;
@property char isRoleUser;
@property char isSecureTokenAuth;
@property (retain) NSString *relativeHomeDir;
@property char extraInfoIncludeFileVaultWarning;
@property (readonly, getter=isSecureTokenAuth) char secureTokenAuth;

+ (id)interestedDaemonKeys;
+ (id)interestedDaemonKeysLimitedToMigratableUsers;
+ (id)keyPathsForValuesAffectingDisplayExtraInfo;

- (void).cxx_destruct;
- (id)displayExtraInfo;
- (id)initWithXpcDictionaryRepresentation:(id)a0 belongingToSystem:(id)a1;
- (char)validatePassword:(id)a0;

@end
