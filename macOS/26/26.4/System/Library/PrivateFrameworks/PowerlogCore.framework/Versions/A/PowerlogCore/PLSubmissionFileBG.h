@interface PLSubmissionFileBG : PLSubmissionFile

- (id)initWithConfig:(id)a0;
- (id)fileType;
- (id)fileExtension;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (id)getBGSQLFile;

@end
