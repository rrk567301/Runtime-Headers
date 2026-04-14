@class NSString;

@interface Pod : NSObject {
    int _state;
    NSString *_payloadFolder;
    float _progress;
    int _newDiskFormat;
}

- (void)setState:(int)a0;
- (unsigned short)productID;
- (void)setProgress:(float)a0;
- (float)progress;
- (id)firmwareVersion;
- (id)serialNumber;
- (void)dealloc;
- (id)init;
- (int)unmount;
- (BOOL)mounted;
- (id)podName;
- (void)updateFirmware:(id)a0;
- (unsigned int)updaterFamilyID;
- (int)diskFormat;
- (BOOL)firmwarePartitionNeedsResizing;
- (id)firmwarePayloadFolder;
- (double)getPercentageFilled;
- (BOOL)hasBangFolder;
- (void)hasBeenUnmounted;
- (unsigned short)highestSupportedBreadcrumbVersion;
- (void)indicateSelection;
- (BOOL)isInRecoveryMode;
- (BOOL)isQ14ConnectedOverUSB;
- (BOOL)mountedEnoughForUpdate;
- (BOOL)needToDisconnectAfterUpdate;
- (BOOL)needToPlugIntoExternalPowerAfterUpdate;
- (unsigned int)podFamilyID;
- (int)podState;
- (int)readBreadcrumbData:(id *)a0 fromOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (void)restoreFirmware:(id)a0;
- (void)setDiskFormat:(int)a0;
- (void)setFirmwarePayloadFolder:(id)a0;
- (unsigned int)spaceForBreadcrumbs;
- (BOOL)supportsBreadCrumbs;
- (BOOL)supportsMultipleDiskFormats;
- (unsigned int)userVisibleFirmwareVersion;
- (id)userVisibleFirmwareVersionString;
- (int)writeBreadcrumbData:(id)a0 atOffset:(unsigned long long)a1;
- (void)writeVolumeIcon:(id)a0;

@end
