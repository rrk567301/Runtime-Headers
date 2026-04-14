@interface PLSubmissionFileBG : PLSubmissionFile

- (id)fileType;
- (id)initWithConfig:(id)a0;
- (id)fileExtension;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (id)getBGSQLFile;

@end
