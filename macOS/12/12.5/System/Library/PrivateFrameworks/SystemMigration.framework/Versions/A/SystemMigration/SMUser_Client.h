@class SMSystem_Client, NSString, NSObject, NSColor;
@protocol OS_dispatch_queue;

@interface SMUser_Client : SMUser

@property (retain) SMSystem_Client *sourceSystem;
@property (retain) NSObject<OS_dispatch_queue> *daemonPropertyQueue;
@property (readonly) NSString *displayName;
@property (readonly) NSString *displayExtraInfo;
@property (readonly) NSColor *extraInfoColor;
@property BOOL shouldPromoteToAdmin;
@property (retain) NSString *clearPassword;
@property BOOL passwordIsTemporary;
@property BOOL allowFileVaultUnlock;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)interestedDaemonKeys;
+ (id)interestedDaemonKeysLimitedToMigratableUsers;
+ (id)keyPathsForValuesAffectingDisplayExtraInfo;
+ (id)keyPathsForValuesAffectingExtraInfoColor;

- (id)description;
- (void).cxx_destruct;
- (id)initWithXpcDictionaryRepresentation:(id)a0 belongingToSystem:(id)a1;

@end
