@class NSString, NSURL, NSArray;

@interface SMSystem : NSObject

@property (retain) NSString *modelID;
@property (retain) NSString *modelUTI;
@property BOOL valid;
@property (readonly) id primaryIdentifier;
@property (retain) NSURL *path;
@property BOOL isFinalSelectedSystem;
@property (readonly) unsigned long long systemType;
@property unsigned long long state;
@property (retain) NSString *stateErrorReasonKey;
@property (readonly) NSString *localizationPrefix;
@property (readonly, weak) NSArray *allUsers;
@property (readonly, weak) NSArray *allGroups;
@property (retain) NSString *migrationServerVersion;
@property unsigned long long migrationServerType;
@property (readonly, getter=isLegacyServerInstall) BOOL legacyServerInstall;
@property (readonly, getter=isSelfContainedServerInstall) BOOL selfContainedServerInstall;
@property (readonly, getter=isMixedLegacyServerInstall) BOOL mixedLegacyServerInstall;
@property (readonly, getter=isClientInstall) BOOL clientInstall;
@property (readonly, getter=isMounted) BOOL mounted;
@property (readonly, weak) NSString *productVersion;
@property (readonly, weak) NSString *systemVersion;
@property (readonly) unsigned long long migratableItemsSupported;

+ (id)migratableUsersFilter;
+ (id)secureTokenAdminUsersFilter;
+ (id)fdeSignedUsersFilter;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)getGroup:(id)a0;
- (void)mount;
- (void)unmount;
- (id)getUserByLongName:(id)a0;
- (id)getUser:(id)a0;
- (id)getUserWithID:(unsigned int)a0;
- (id)getUserWithUUID:(id)a0;
- (id)getGroupWithID:(unsigned int)a0;
- (id)getGroupWithGeneratedUID:(id)a0;
- (void)evaluateServerType;
- (void)mountWithCredentials:(id)a0;
- (id)filteredUsers:(id)a0;
- (id)getAllUsersFromGroupWithName:(id)a0;
- (id)getAllUsersFromGroup:(id)a0;
- (BOOL)isExpectedServerType:(unsigned long long)a0;
- (id)filteredSecureTokenAdminUsers;
- (void)scannerInit;

@end
