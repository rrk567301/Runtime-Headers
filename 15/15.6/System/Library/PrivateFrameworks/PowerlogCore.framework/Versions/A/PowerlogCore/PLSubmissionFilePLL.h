@interface PLSubmissionFilePLL : PLSubmissionFile

@property char isEnergyTasking;

- (id)fileExtension;
- (id)fileType;
- (void)flush;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (void)emitFileExists:(char)a0;
- (void)emitCopyResult:(char)a0;
- (id)baseCADictionary;
- (char)copyAndPrepareLog;
- (char)copyArchiveAtPath:(id)a0 to:(id)a1;
- (char)copyLastArchiveToPath:(id)a0;
- (char)copyPowerlogToPath:(id)a0;
- (char)copyUpgradePowerlogToPath:(id)a0;
- (void)emitDecompressionResult:(char)a0;
- (void)emitPreparationResult:(char)a0;
- (void)generateSubmissionTagForCurrentLog;
- (void)logSubmissionSizeToAnalytics:(unsigned long long)a0 withUncompressedSize:(unsigned long long)a1;
- (char)prepareDatabaseAtPath:(id)a0;
- (id)updateSubmissionTagWithConnection:(id)a0;

@end
