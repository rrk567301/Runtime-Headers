@class NSString;

@interface MSUMigrationHelper : NSObject {
    _Atomic BOOL _copyInProgress;
    _Atomic unsigned long long _totalCopySize;
    unsigned long long _copiedSoFar;
    int _currentOperation;
    int _previousProgress;
}

@property (readonly) NSString *systemVolumeMountpoint;
@property (readonly) NSString *dataVolumeMountpoint;
@property (readonly) NSString *updatePartitionMountpoint;

- (void)dealloc;
- (char)createFirmlinks;
- (char)_dataVolumeIsAccessible;
- (char)_ensureDirectoryExistsAtPath:(id)a0 error:(id *)a1;
- (char)_updatePartitionIsAccessible;
- (char)_writeCookieFileAtPath:(id)a0;
- (char)_writeDictionary:(id)a0 atPath:(id)a1 error:(id *)a2;
- (id)bootTimeInstallPackages;
- (id)dataTemplatePath;
- (id)initWithSystemVolume:(id)a0 dataVolume:(id)a1 updatePartition:(id)a2;
- (id)initWithSystemVolume:(id)a0 dataVolume:(id)a1 updatePartition:(id)a2 progressBlock:(id /* block */)a3;
- (char)populateAppleInternalDiagsVolume;
- (char)preparePrebootVolumeForMigration:(id)a0 fullReplacement:(char)a1 nonTemplateMigration:(char)a2;
- (char)preparePrebootVolumeForMigration:(id)a0 fullReplacement:(char)a1 nonTemplateMigration:(char)a2 seedingProgram:(id)a3;
- (char)preparePrebootVolumeForMigration:(id)a0 fullReplacement:(char)a1 nonTemplateMigration:(char)a2 seedingProgram:(id)a3 didRequestEraseInstall:(char)a4 volumeUUIDToErase:(id)a5;
- (char)queueAppleInternalPackagesForBootTimeInstall;
- (char)queuePackagesForBootTimeInstall:(id)a0;
- (id)systemVolumeContainter;

@end
