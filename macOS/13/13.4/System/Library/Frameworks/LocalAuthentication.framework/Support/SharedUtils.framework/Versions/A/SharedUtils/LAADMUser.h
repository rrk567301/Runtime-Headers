@class NSString, ADMUser;

@interface LAADMUser : NSObject {
    ADMUser *_admUser;
}

@property (readonly, nonatomic) BOOL isAdministrator;
@property (readonly, nonatomic) BOOL isDirectAdministrator;
@property (readonly, nonatomic) BOOL isGuestUser;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) long long userID;

+ (id)currentUser;
+ (id)findUserByID:(unsigned long long)a0 searchParent:(BOOL)a1;
+ (id)findUserByName:(id)a0 searchParent:(BOOL)a1;
+ (id)allLocalUsers;
+ (BOOL)isUserNameUnique:(id)a0 searchParent:(BOOL)a1;
+ (BOOL)shouldDisplayUser:(id)a0;
+ (id)namesFromUsersWithUIDs:(id)a0;
+ (id)namesFromUsersWithUIDs:(id)a0 presentInGroupWithName:(id)a1;
+ (id)rootUser;

- (void).cxx_destruct;
- (id)_dataVolumeForSystemMountedAtPath:(id)a0;
- (id)_loadKEKforUserUuid:(unsigned char[16])a0 volume:(id)a1;
- (id)_mountPathForVolume:(id)a0;
- (id)_volumeForSystemMountedAtPath:(id)a0;
- (id)initWithADMUser:(id)a0;
- (BOOL)isDeviceOwner;
- (BOOL)isMemberOfGroupWithName:(id)a0;

@end
