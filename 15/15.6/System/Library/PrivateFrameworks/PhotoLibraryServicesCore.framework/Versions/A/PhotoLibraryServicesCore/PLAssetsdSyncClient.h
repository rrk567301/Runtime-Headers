@interface PLAssetsdSyncClient : PLAssetsdBaseClient

- (void)finalizeOTARestoreRecreatingAlbums:(char)a0;
- (void)updateRestoredAssetWithUUID:(id)a0 paths:(id)a1 fixAddedDate:(char)a2;

@end
