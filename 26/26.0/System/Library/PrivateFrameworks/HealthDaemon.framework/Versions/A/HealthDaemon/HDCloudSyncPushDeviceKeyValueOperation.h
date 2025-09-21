@class HDCloudSyncDeviceContextRecord, HDCloudSyncCachedZone;

@interface HDCloudSyncPushDeviceKeyValueOperation : HDCloudSyncOperation {
    HDCloudSyncCachedZone *_contextSyncZone;
    HDCloudSyncDeviceContextRecord *_recordWithCurrentIdentity;
}

- (void)main;
- (void).cxx_destruct;

@end
