@interface PLSubmissionFileBG : PLSubmissionFile

- (id)fileType;
- (id)fileExtension;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (id)getBGSQLFile;

@end
