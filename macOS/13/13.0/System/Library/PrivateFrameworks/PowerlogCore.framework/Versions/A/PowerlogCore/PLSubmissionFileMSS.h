@interface PLSubmissionFileMSS : PLSubmissionFile

- (id)fileExtension;
- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (BOOL)flushMicrostackshots;
- (id)getFileList;

@end
