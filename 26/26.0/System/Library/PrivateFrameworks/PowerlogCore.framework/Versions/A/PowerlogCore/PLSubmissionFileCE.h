@interface PLSubmissionFileCE : PLSubmissionFile

- (id)fileType;
- (id)fileExtension;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (id)getCESQLFile;
- (BOOL)performCopyTablesToDB:(id)a0;
- (id)tablesToMigrateForCE;

@end
