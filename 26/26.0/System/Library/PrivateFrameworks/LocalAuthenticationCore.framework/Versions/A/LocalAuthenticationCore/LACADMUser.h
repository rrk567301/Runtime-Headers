@class NSString, NSUUID, ADMUser;

@interface LACADMUser : NSObject <LACADMUserProtocol> {
    ADMUser *_admUser;
}

@property (readonly, nonatomic) BOOL isAdministrator;
@property (readonly, nonatomic) BOOL isDirectAdministrator;
@property (readonly, nonatomic) BOOL isGuestUser;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) NSUUID *userGUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDeviceOwner;
- (id)initWithADMUser:(id)a0;
- (id)admUser;
- (id)_dataVolumeForSystemMountedAtPath:(id)a0;
- (id)_loadKEKforUserUuid:(unsigned char[16])a0 volume:(id)a1;
- (id)_mountPathForVolume:(id)a0;
- (id)_volumeForSystemMountedAtPath:(id)a0;
- (id)initNullInstance;
- (BOOL)isMemberOfGroupWithName:(id)a0;

@end
