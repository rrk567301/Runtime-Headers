@interface MFSyncedSignaturesFile : MFSyncedFile

+ (id)syncedSignaturesFile;

- (id)resolveConflictVersion:(id)a0 againstCurrentVersion:(id)a1;
- (id)upgradeLegacyCloudData:(id)a0 fromLegacyVersion:(long long)a1;
- (id)readSignatures;
- (void)writeSignatures:(id)a0;

@end
