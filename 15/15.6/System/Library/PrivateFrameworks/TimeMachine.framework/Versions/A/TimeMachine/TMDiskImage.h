@class NSURL, NSString;

@interface TMDiskImage : NSObject

@property (copy) NSURL *diskImageURL;
@property (readonly) long long qos;
@property (readonly) NSString *displayName;
@property (readonly) NSString *hostUUID;
@property (readonly) NSString *macAddress;
@property (readonly) unsigned int encryptionState;
@property (readonly) NSURL *backupDiskMountPoint;
@property (readonly) NSString *backupDiskDevicePath;
@property (readonly) NSString *backupDiskRawDevicePath;
@property (readonly) char backupDiskIsWritable;
@property (readonly) char backupDiskIsMountable;
@property (readonly) char backupDiskIsAPFS;
@property (readonly) char backupDiskIsHFS;
@property (readonly) char isPurgeable;
@property (readonly) char isPartiallyCreated;
@property (readonly) char isIncomplete;
@property (readonly) char isSafeToDelete;

+ (id)diskImageMatchingThisComputerInDirectory:(id)a0 qos:(long long)a1;
+ (id)diskImagesInDirectory:(id)a0 error:(id *)a1;
+ (id)diskImagesInDirectory:(id)a0 qos:(long long)a1 error:(id *)a2;
+ (id)diskImagesInDirectory:(id)a0 qos:(long long)a1 includeIncomplete:(char)a2 error:(id *)a3;

- (void).cxx_destruct;
- (char)isImmutable;
- (id)attachFileMode:(long long)a0 autoMount:(char)a1 error:(id *)a2;
- (void)_attemptToEnsureImageIsNotInUse;
- (id)_backupDiskDescription;
- (id)_bsdNameForMedia:(unsigned int)a0;
- (void)_detachOrphanDiskImages;
- (id)_deviceNames;
- (id)_deviceNamesForDiskImagePath:(id)a0;
- (void)_ejectDeviceNames:(id)a0;
- (unsigned int)_encryptionStateForDrive:(unsigned int)a0;
- (char)_fullfsync:(id *)a0;
- (id)_imagePathForDrive:(unsigned int)a0;
- (void)_iterate:(unsigned int)a0 options:(char)a1 usingBlock:(id /* block */)a2;
- (id)_tokenURL;
- (char)_unmountDeviceNames:(id)a0 force:(char)a1;
- (id)associatedDictionaryForName:(id)a0 error:(id *)a1;
- (char)asynchronouslyDelete:(id *)a0;
- (void)eject;
- (id)encryptionUUID;
- (id)imageInfoOpenEncryption:(char)a0 returningError:(id *)a1;
- (id)initWithDiskImageURL:(id)a0;
- (id)initWithDiskImageURL:(id)a0 qos:(long long)a1;
- (char)matchesAnyHostUUIDs:(id)a0;
- (char)matchesHostUUID:(id)a0;
- (char)matchesMACAddress:(id)a0;
- (char)matchesThisComputer;
- (id)readTimeMachineInfo:(id *)a0;
- (id)renameUniquelyUsingBaseName:(id)a0 extension:(id)a1 error:(id *)a2;
- (char)setAssociatedDictionary:(id)a0 forName:(id)a1 error:(id *)a2;
- (char)setImmutable:(char)a0;
- (char)setSyncablePasswordID:(id)a0;
- (id)syncablePasswordID;
- (char)unmountForce:(char)a0;
- (id)updateAndRenameForThisComputer;
- (char)updateMachineInfoForThisComputer;
- (char)writeTimeMachineInfo:(id)a0 error:(id *)a1;

@end
