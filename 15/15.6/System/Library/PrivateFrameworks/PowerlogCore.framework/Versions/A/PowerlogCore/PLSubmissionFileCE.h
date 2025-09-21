@interface PLSubmissionFileCE : PLSubmissionFile

- (id)fileExtension;
- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (char)copyAndPrepareLog;
- (id)getCESQLFile;
- (char)performCopyTablesToDB:(id)a0;
- (id)tablesToMigrateForCE;

@end
