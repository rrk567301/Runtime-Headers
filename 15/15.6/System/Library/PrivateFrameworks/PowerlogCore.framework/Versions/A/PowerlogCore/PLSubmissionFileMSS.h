@interface PLSubmissionFileMSS : PLSubmissionFile

- (id)fileExtension;
- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (id)mssTextFilePath;
- (char)collectMSS;
- (char)copyAndPrepareLog;
- (char)flushMicrostackshots;
- (char)generateMSS;
- (id)getFileList;
- (char)packageDirectory:(id)a0 to:(id)a1;

@end
