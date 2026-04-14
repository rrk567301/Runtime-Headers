@interface PLSubmissionFileBG : PLSubmissionFile

- (id)fileType;
- (id)fileExtension;
- (void)submit;
- (id)initWithConfig:(id)a0;
- (BOOL)copyAndPrepareLog;
- (id)getBGSQLFile;

@end
