@interface MFSyncedRulesFile : MFSyncedFile

+ (id)syncedRulesFile;

- (id)readRules;
- (void)writeRules:(id)a0;
- (id)resolveConflictVersion:(id)a0 againstCurrentVersion:(id)a1;
- (id)upgradeLegacyCloudData:(id)a0 fromLegacyVersion:(long long)a1;

@end
