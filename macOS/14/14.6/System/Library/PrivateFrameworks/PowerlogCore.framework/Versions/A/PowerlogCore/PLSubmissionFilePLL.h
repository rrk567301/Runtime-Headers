@interface PLSubmissionFilePLL : PLSubmissionFile

@property BOOL isEnergyTasking;

- (id)fileExtension;
- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (void)emitCopyResult:(BOOL)a0;
- (void)emitFileExists:(BOOL)a0;
- (id)baseCADictionary;
- (BOOL)copyAndPrepareLog;
- (BOOL)copyLastArchiveToPath:(id)a0;
- (void)emitDecompressionResult:(BOOL)a0;
- (void)emitPreparationResult:(BOOL)a0;
- (void)generateSubmissionTagForCurrentLog;
- (void)logSubmissionSizeToAnalytics:(unsigned long long)a0 withUncompressedSize:(unsigned long long)a1;
- (BOOL)prepareDatabaseAtPath:(id)a0;
- (id)updateSubmissionTagWithConnection:(id)a0;

@end
