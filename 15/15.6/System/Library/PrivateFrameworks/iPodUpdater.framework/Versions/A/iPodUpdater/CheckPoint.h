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
- (unsigned long long)RAM;
- (char)hasPowerToFlash;
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
- (char)rebootsAfterEject;
- (char)showingBangFolder;
- (char)supportsBreadcrumbs;
- (char)supportsFlashBacklight;
- (char)supportsHibernation;
- (char)supportsMultipleDiskFormats;
- (char)supportsSelfFormat;
- (char)supportsShroudedFailureRetry;
- (unsigned int)userVisibleFirmwareVersion;
- (id)userVisibleFirmwareVersionString;

@end
