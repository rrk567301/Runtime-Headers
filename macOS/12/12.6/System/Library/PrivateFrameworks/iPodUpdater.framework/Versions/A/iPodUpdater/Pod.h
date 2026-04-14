@class NSString;

@interface Pod : NSObject {
    int _state;
    NSString *_payloadFolder;
    float _progress;
    int _newDiskFormat;
}

- (void)dealloc;
- (id)init;
- (void)setState:(int)a0;
- (float)progress;
- (unsigned short)productID;
- (id)serialNumber;
- (void)setProgress:(float)a0;
- (id)firmwareVersion;
- (int)unmount;
- (BOOL)mounted;
- (void)setFirmwarePayloadFolder:(id)a0;
- (int)podState;
- (BOOL)hasBangFolder;
- (BOOL)firmwarePartitionNeedsResizing;
- (BOOL)isQ14ConnectedOverUSB;
- (BOOL)supportsBreadCrumbs;
- (id)firmwarePayloadFolder;
- (void)setDiskFormat:(int)a0;
- (void)restoreFirmware:(id)a0;
- (void)updateFirmware:(id)a0;
- (BOOL)needToPlugIntoExternalPowerAfterUpdate;
- (BOOL)needToDisconnectAfterUpdate;
- (id)podName;
- (BOOL)mountedEnoughForUpdate;
- (void)indicateSelection;
- (int)diskFormat;
- (BOOL)supportsMultipleDiskFormats;
- (unsigned short)highestSupportedBreadcrumbVersion;
- (unsigned int)spaceForBreadcrumbs;
- (int)readBreadcrumbData:(id *)a0 fromOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (int)writeBreadcrumbData:(id)a0 atOffset:(unsigned long long)a1;
- (void)hasBeenUnmounted;
- (unsigned int)updaterFamilyID;
- (unsigned int)podFamilyID;
- (id)userVisibleFirmwareVersionString;
- (unsigned int)userVisibleFirmwareVersion;
- (void)writeVolumeIcon:(id)a0;
- (double)getPercentageFilled;
- (BOOL)isInRecoveryMode;

@end
