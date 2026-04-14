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
- (id)serialNumber;
- (unsigned short)productID;
- (void)setProgress:(float)a0;
- (id)firmwareVersion;
- (int)unmount;
- (BOOL)mounted;
- (id)podName;
- (int)podState;
- (BOOL)mountedEnoughForUpdate;
- (void)indicateSelection;
- (int)diskFormat;
- (BOOL)supportsMultipleDiskFormats;
- (BOOL)supportsBreadCrumbs;
- (unsigned short)highestSupportedBreadcrumbVersion;
- (unsigned int)spaceForBreadcrumbs;
- (BOOL)needToPlugIntoExternalPowerAfterUpdate;
- (BOOL)needToDisconnectAfterUpdate;
- (void)updateFirmware:(id)a0;
- (void)restoreFirmware:(id)a0;
- (int)readBreadcrumbData:(id *)a0 fromOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (int)writeBreadcrumbData:(id)a0 atOffset:(unsigned long long)a1;
- (void)hasBeenUnmounted;
- (unsigned int)updaterFamilyID;
- (unsigned int)podFamilyID;
- (id)userVisibleFirmwareVersionString;
- (unsigned int)userVisibleFirmwareVersion;
- (void)writeVolumeIcon:(id)a0;
- (double)getPercentageFilled;
- (BOOL)isQ14ConnectedOverUSB;
- (BOOL)isInRecoveryMode;
- (void)setFirmwarePayloadFolder:(id)a0;
- (id)firmwarePayloadFolder;
- (BOOL)hasBangFolder;
- (BOOL)firmwarePartitionNeedsResizing;
- (void)setDiskFormat:(int)a0;

@end
