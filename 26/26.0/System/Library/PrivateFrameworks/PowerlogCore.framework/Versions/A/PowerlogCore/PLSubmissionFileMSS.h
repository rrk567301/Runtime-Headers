@interface PLSubmissionFileMSS : PLSubmissionFile

- (id)fileType;
- (id)fileExtension;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (id)mssTextFilePath;
- (BOOL)collectMSS;
- (BOOL)copyAndPrepareLog;
- (BOOL)flushMicrostackshots;
- (BOOL)generateMSS;
- (id)getFileList;
- (BOOL)packageDirectory:(id)a0 to:(id)a1;

@end
