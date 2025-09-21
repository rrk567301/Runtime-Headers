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
- (char)mounted;
- (id)podName;
- (void)updateFirmware:(id)a0;
- (unsigned int)updaterFamilyID;
- (int)diskFormat;
- (char)firmwarePartitionNeedsResizing;
- (id)firmwarePayloadFolder;
- (double)getPercentageFilled;
- (char)hasBangFolder;
- (void)hasBeenUnmounted;
- (unsigned short)highestSupportedBreadcrumbVersion;
- (void)indicateSelection;
- (char)isInRecoveryMode;
- (char)isQ14ConnectedOverUSB;
- (char)mountedEnoughForUpdate;
- (char)needToDisconnectAfterUpdate;
- (char)needToPlugIntoExternalPowerAfterUpdate;
- (unsigned int)podFamilyID;
- (int)podState;
- (int)readBreadcrumbData:(id *)a0 fromOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (void)restoreFirmware:(id)a0;
- (void)setDiskFormat:(int)a0;
- (void)setFirmwarePayloadFolder:(id)a0;
- (unsigned int)spaceForBreadcrumbs;
- (char)supportsBreadCrumbs;
- (char)supportsMultipleDiskFormats;
- (unsigned int)userVisibleFirmwareVersion;
- (id)userVisibleFirmwareVersionString;
- (int)writeBreadcrumbData:(id)a0 atOffset:(unsigned long long)a1;
- (void)writeVolumeIcon:(id)a0;

@end
