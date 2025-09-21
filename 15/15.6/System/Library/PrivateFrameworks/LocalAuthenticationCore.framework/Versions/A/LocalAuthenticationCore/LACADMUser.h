@class NSString, ADMUser;

@interface LACADMUser : NSObject {
    ADMUser *_admUser;
}

@property (readonly, nonatomic) char isAdministrator;
@property (readonly, nonatomic) char isDirectAdministrator;
@property (readonly, nonatomic) char isGuestUser;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) long long userID;

+ (id)currentUser;
+ (id)allLocalUsers;
+ (char)shouldDisplayUser:(id)a0;
+ (id)findUserByName:(id)a0 searchParent:(char)a1;
+ (id)findUserByID:(unsigned long long)a0 searchParent:(char)a1;
+ (char)isUserNameUnique:(id)a0 searchParent:(char)a1;
+ (id)namesFromUsersWithUIDs:(id)a0 presentInGroupWithName:(id)a1;
+ (id)namesFromUsersWithUIDs:(id)a0;
+ (id)rootUser;

- (void).cxx_destruct;
- (char)isDeviceOwner;
- (id)initWithADMUser:(id)a0;
- (id)_dataVolumeForSystemMountedAtPath:(id)a0;
- (id)_loadKEKforUserUuid:(unsigned char[16])a0 volume:(id)a1;
- (id)_mountPathForVolume:(id)a0;
- (id)_volumeForSystemMountedAtPath:(id)a0;
- (char)isMemberOfGroupWithName:(id)a0;

@end
