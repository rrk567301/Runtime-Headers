@interface PLSubmissionFileBG : PLSubmissionFile

- (id)fileExtension;
- (id)initWithConfig:(id)a0;
- (id)fileType;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (id)getBGSQLFile;

@end
