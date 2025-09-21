@interface PLSubmissionFileBG : PLSubmissionFile

- (id)fileExtension;
- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (char)copyAndPrepareLog;
- (id)getBGSQLFile;

@end
