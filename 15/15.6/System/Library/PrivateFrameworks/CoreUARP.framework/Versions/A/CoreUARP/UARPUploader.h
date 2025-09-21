@class UARPController, NSObject;
@protocol OS_os_log;

@interface UARPUploader : NSObject {
    NSObject<OS_os_log> *_xpcLog;
}

@property (readonly, weak) UARPController *controller;

- (id)init;
- (void).cxx_destruct;
- (char)setController:(id)a0;
- (char)accessoryReachable:(id)a0 error:(id *)a1;
- (char)accessoryUnreachable:(id)a0 error:(id *)a1;
- (char)addAccessory:(id)a0 error:(id *)a1;
- (char)applyStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (char)cancelAssetStagingForAccessory:(id)a0 asset:(id)a1;
- (void)firmwareStagingComplete:(id)a0 assetID:(id)a1 withStatus:(unsigned long long)a2;
- (void)firmwareStagingDataBlockTransferred:(id)a0 assetID:(id)a1 offset:(unsigned int)a2 blockSize:(unsigned int)a3;
- (void)firmwareStagingProgress:(id)a0 assetID:(id)a1 bytesSent:(unsigned long long)a2 bytesTotal:(unsigned long long)a3 filterProgress:(char)a4;
- (char)genericNotification:(id)a0 notificationName:(id)a1 error:(id *)a2;
- (char)offerAssetToAccessory:(id)a0 asset:(id)a1 error:(id *)a2;
- (char)pauseAssetTransfersForAccessory:(id)a0;
- (id)pendingTssRequests;
- (char)recvDataFromAccessory:(id)a0 data:(id)a1 error:(id *)a2;
- (char)removeAccessory:(id)a0 error:(id *)a1;
- (char)rescindStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (char)resumeAssetTransfersForAccessory:(id)a0;
- (void)stagedFirmwareApplicationComplete:(id)a0 withStatus:(unsigned long long)a1;
- (void)stagedFirmwareRescindComplete:(id)a0 withStatus:(unsigned long long)a1;
- (char)startTapToRadar:(id)a0;
- (void)stopTapToRadar;
- (char)supplementalAssetUpdated:(id)a0 assetName:(id)a1 error:(id *)a2;
- (void)tssResponse:(id)a0;

@end
