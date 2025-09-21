@class NSString;

@interface DeviceRecoveryBrainSpaceManager : NSObject

@property (readonly, nonatomic) NSString *systemDataVolumeMountPath;
@property (readonly, nonatomic) NSString *userDataVolumeMountPath;
@property (readonly, nonatomic) NSString *updateVolumeMountPath;

- (void).cxx_destruct;
- (void)cleanupMobileAssets;
- (void)cleanupUpdateVolume;
- (void)deleteMobileBackupSnapshots;
- (id)freeSpaceOnMainContainerTillThreshold:(id)a0;
- (id)getContainerDeviceNodeForVolumeAtPath:(id)a0 outError:(id *)a1;
- (id)getFreeSpaceOnContainerForVolumeMountedAtPath:(id)a0 error:(id *)a1;
- (id)getFreeSpaceOnDeviceForUser:(id *)a0;
- (id)initWithMounts:(id)a0 userDataVolumeMountPath:(id)a1 updateVolumeMountPath:(id)a2;
- (void)performAPFSPurge;
- (void)syncVolumes;

@end
