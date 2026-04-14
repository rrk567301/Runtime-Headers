@interface PLSubmissionFilePLL : PLSubmissionFile

- (id)fileExtension;
- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (void)logSubmissionSizeToAnalytics:(unsigned long long)a0 withUncompressedSize:(unsigned long long)a1;
- (void)prepareDatabaseAtPath:(id)a0;
- (void)generateSubmissionTagForCurrentLog;
- (id)updateSubmissionTagWithConnection:(id)a0;

@end
