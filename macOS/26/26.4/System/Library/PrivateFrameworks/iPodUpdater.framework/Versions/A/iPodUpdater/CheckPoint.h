@class NSDictionary;

@interface CheckPoint : NSObject {
    unsigned int _service;
    NSDictionary *_checkpointDict;
    int _method;
}

+ (int)preferredCheckPointMethodForService:(unsigned int)a0;

- (id)firmwareVersion;
- (int)connectionType;
- (int)updateMethod;
- (id)serialNumber;
- (void)dealloc;
- (unsigned long long)RAM;
- (BOOL)hasPowerToFlash;
- (int)updaterFamilyID;
- (int)checkPointDataGSC:(char **)a0;
- (int)checkPointMethod;
- (unsigned short)desiredShroudSize;
- (int)diskFormat;
- (int)diskHeaderFormat;
- (id)firewireGUID;
- (id)initWithService:(unsigned int)a0 usingMethod:(int)a1;
- (unsigned short)maxFirmwareWriteBlocks;
- (int)podFamilyID;
- (void)readCheckPointDataUsingMethod:(int)a0;
- (BOOL)rebootsAfterEject;
- (BOOL)showingBangFolder;
- (BOOL)supportsBreadcrumbs;
- (BOOL)supportsFlashBacklight;
- (BOOL)supportsHibernation;
- (BOOL)supportsMultipleDiskFormats;
- (BOOL)supportsSelfFormat;
- (BOOL)supportsShroudedFailureRetry;
- (unsigned int)userVisibleFirmwareVersion;
- (id)userVisibleFirmwareVersionString;

@end
