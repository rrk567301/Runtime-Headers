@interface HMDMatterUARPUploader : UARPUploader

- (char)accessoryReachable:(id)a0 error:(id *)a1;
- (char)accessoryUnreachable:(id)a0 error:(id *)a1;
- (char)applyStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (char)cancelAssetStagingForAccessory:(id)a0 asset:(id)a1;
- (char)offerAssetToAccessory:(id)a0 asset:(id)a1 error:(id *)a2;
- (char)pauseAssetTransfersForAccessory:(id)a0;
- (char)recvDataFromAccessory:(id)a0 data:(id)a1 error:(id *)a2;
- (char)rescindStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (char)resumeAssetTransfersForAccessory:(id)a0;

@end
