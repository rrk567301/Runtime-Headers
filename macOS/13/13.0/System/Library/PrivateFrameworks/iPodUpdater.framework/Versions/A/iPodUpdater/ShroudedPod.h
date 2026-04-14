@interface ShroudedPod : DiskPod {
    unsigned int _numberBreadcrumbBlocks;
}

+ (int)firmwareTypeForDownloadType:(int)a0;

- (void)dealloc;
- (void)indicateSelection;
- (BOOL)supportsMultipleDiskFormats;
- (BOOL)supportsBreadCrumbs;
- (unsigned int)spaceForBreadcrumbs;
- (void)updateFirmware:(id)a0;
- (void)restoreFirmware:(id)a0;
- (int)readBreadcrumbData:(id *)a0 fromOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (int)writeBreadcrumbData:(id)a0 atOffset:(unsigned long long)a1;
- (BOOL)isQ14ConnectedOverUSB;
- (BOOL)firmwarePartitionNeedsResizing;
- (void)updateFirmware:(id)a0 andFormat:(BOOL)a1;
- (id)fullBSDPathForFormat:(int)a0;
- (int)sliceNumberOfDataPartitionForFormat:(int)a0;
- (unsigned long long)sizeForNewFirmwarePartition;
- (void)releaseSCSIDeviceInterface;
- (int)updateFirmwareType:(int)a0 withFirmware:(id)a1 startPercent:(double)a2 endPercent:(double)a3;
- (id)createNewBreadCrumb:(BOOL)a0 firmware:(id)a1;
- (int)getBreadcrumbSize:(unsigned int *)a0;
- (int)partitionAndFormat;
- (int)removeSpeakableFiles;
- (int)setFirmwareSize:(unsigned long long)a0;
- (int)getFirmwareSize:(unsigned long long *)a0;
- (int)SCSIOpen:(int)a0 length:(unsigned int)a1;
- (int)SCSIClose;
- (int)SCSIReset;
- (int)SCSIDownload:(id)a0 type:(int)a1 startPercent:(double)a2 endPercent:(double)a3;
- (unsigned long long)shroudedSize;

@end
