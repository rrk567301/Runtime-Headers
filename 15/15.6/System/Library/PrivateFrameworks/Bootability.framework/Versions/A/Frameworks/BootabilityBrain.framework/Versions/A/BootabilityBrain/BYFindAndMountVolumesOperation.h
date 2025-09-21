@class NSMutableArray;

@interface BYFindAndMountVolumesOperation : BYOperation

@property char mountedSourcePrebootVolume;
@property char mountedTargetPrebootVolume;
@property char mountedISCPrebootVolume;
@property char mountedTargetRecoveryVolume;
@property char mountedExternalRecoveryVolume;
@property (retain) NSMutableArray *lockDescriptors;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithRequest:(id)a0;
- (char)_ensureReadWriteMountForVolume:(id)a0;
- (char)_openLockFileForVolume:(id)a0;
- (void)cleanUpAfterSuccess:(char)a0;

@end
