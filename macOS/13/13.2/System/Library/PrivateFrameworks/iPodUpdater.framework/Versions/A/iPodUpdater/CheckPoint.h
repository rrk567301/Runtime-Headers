@class NSDictionary;

@interface CheckPoint : NSObject {
    unsigned int _service;
    NSDictionary *_checkpointDict;
    int _method;
}

+ (int)preferredCheckPointMethodForService:(unsigned int)a0;

- (void)dealloc;
- (int)connectionType;
- (id)serialNumber;
- (id)firmwareVersion;
- (int)updateMethod;
- (int)diskFormat;
- (BOOL)supportsMultipleDiskFormats;
- (int)updaterFamilyID;
- (int)podFamilyID;
- (id)userVisibleFirmwareVersionString;
- (unsigned int)userVisibleFirmwareVersion;
- (id)firewireGUID;
- (id)initWithService:(unsigned int)a0 usingMethod:(int)a1;
- (int)checkPointMethod;
- (int)diskHeaderFormat;
- (BOOL)supportsHibernation;
- (unsigned long long)RAM;
- (BOOL)supportsFlashBacklight;
- (BOOL)hasPowerToFlash;
- (BOOL)rebootsAfterEject;
- (BOOL)showingBangFolder;
- (BOOL)supportsSelfFormat;
- (BOOL)supportsBreadcrumbs;
- (BOOL)supportsShroudedFailureRetry;
- (unsigned short)maxFirmwareWriteBlocks;
- (unsigned short)desiredShroudSize;
- (int)checkPointDataGSC:(char **)a0;
- (void)readCheckPointDataUsingMethod:(int)a0;

@end
