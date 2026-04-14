@class NSString, SMSystem_Client;

@interface SMMacUser_Client : SMUser_Client

@property (retain) SMSystem_Client *sourceSystem;
@property BOOL isAdminUser;
@property BOOL isRoleUser;
@property BOOL isSecureTokenAuth;
@property (retain) NSString *relativeHomeDir;
@property BOOL extraInfoIncludeFileVaultWarning;
@property (readonly, getter=isSecureTokenAuth) BOOL secureTokenAuth;

+ (id)interestedDaemonKeys;
+ (id)interestedDaemonKeysLimitedToMigratableUsers;
+ (id)keyPathsForValuesAffectingDisplayExtraInfo;
+ (id)keyPathsForValuesAffectingExtraInfoColor;

- (void).cxx_destruct;
- (id)initWithXpcDictionaryRepresentation:(id)a0 belongingToSystem:(id)a1;
- (id)displayExtraInfo;
- (BOOL)validatePassword:(id)a0;
- (id)extraInfoColor;

@end
