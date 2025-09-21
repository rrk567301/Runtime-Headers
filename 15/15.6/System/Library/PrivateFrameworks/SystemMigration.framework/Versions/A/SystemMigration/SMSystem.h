@class NSString, NSURL, NSArray;

@interface SMSystem : NSObject

@property (retain) NSString *modelID;
@property (retain) NSString *modelUTI;
@property char valid;
@property (readonly) id primaryIdentifier;
@property (retain) NSURL *path;
@property char isFinalSelectedSystem;
@property (readonly) unsigned long long systemType;
@property unsigned long long state;
@property unsigned long long stateError;
@property (readonly) NSString *localizationPrefix;
@property (readonly, weak) NSArray *allUsers;
@property (readonly, weak) NSArray *allGroups;
@property (retain) NSString *migrationServerVersion;
@property unsigned long long migrationServerType;
@property (readonly, getter=isLegacyServerInstall) char legacyServerInstall;
@property (readonly, getter=isSelfContainedServerInstall) char selfContainedServerInstall;
@property (readonly, getter=isMixedLegacyServerInstall) char mixedLegacyServerInstall;
@property (readonly, getter=isClientInstall) char clientInstall;
@property (readonly, getter=isMounted) char mounted;
@property (readonly, weak) NSString *productVersion;
@property (readonly, weak) NSString *systemVersion;
@property (readonly) unsigned long long migratableItemsSupported;

+ (id)fdeSignedUsersFilter;
+ (id)migratableUsersFilter;
+ (id)secureTokenAdminUsersFilter;

- (id)init;
- (void).cxx_destruct;
- (id)getGroup:(id)a0;
- (void)invalidate;
- (void)unmount;
- (void)mount;
- (id)getGroupWithID:(unsigned int)a0;
- (void)evaluateServerType;
- (id)filteredSecureTokenAdminUsers;
- (id)filteredUsers:(id)a0;
- (id)getAllUsersFromGroup:(id)a0;
- (id)getAllUsersFromGroupWithName:(id)a0;
- (id)getGroupWithGeneratedUID:(id)a0;
- (id)getUser:(id)a0;
- (id)getUserByLongName:(id)a0;
- (id)getUserWithID:(unsigned int)a0;
- (id)getUserWithUUID:(id)a0;
- (char)isExpectedServerType:(unsigned long long)a0;
- (void)mountWithCredentials:(id)a0;
- (void)scannerInit;

@end
