@interface ShroudedPod : DiskPod {
    unsigned int _numberBreadcrumbBlocks;
}

+ (int)firmwareTypeForDownloadType:(int)a0;

- (void)dealloc;
- (BOOL)firmwarePartitionNeedsResizing;
- (BOOL)isQ14ConnectedOverUSB;
- (BOOL)supportsBreadCrumbs;
- (void)restoreFirmware:(id)a0;
- (void)updateFirmware:(id)a0;
- (void)indicateSelection;
- (BOOL)supportsMultipleDiskFormats;
- (unsigned int)spaceForBreadcrumbs;
- (int)readBreadcrumbData:(id *)a0 fromOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (int)writeBreadcrumbData:(id)a0 atOffset:(unsigned long long)a1;
- (int)sliceNumberOfDataPartitionForFormat:(int)a0;
- (void)updateFirmware:(id)a0 andFormat:(BOOL)a1;
- (unsigned long long)sizeForNewFirmwarePartition;
- (id)fullBSDPathForFormat:(int)a0;
- (void)releaseSCSIDeviceInterface;
- (int)SCSIOpen:(int)a0 length:(unsigned int)a1;
- (int)SCSIDownload:(id)a0 type:(int)a1 startPercent:(double)a2 endPercent:(double)a3;
- (int)SCSIClose;
- (unsigned long long)shroudedSize;
- (int)getFirmwareSize:(unsigned long long *)a0;
- (int)setFirmwareSize:(unsigned long long)a0;
- (id)createNewBreadCrumb:(BOOL)a0 firmware:(id)a1;
- (int)updateFirmwareType:(int)a0 withFirmware:(id)a1 startPercent:(double)a2 endPercent:(double)a3;
- (int)SCSIReset;
- (int)partitionAndFormat;
- (int)removeSpeakableFiles;
- (int)getBreadcrumbSize:(unsigned int *)a0;

@end
