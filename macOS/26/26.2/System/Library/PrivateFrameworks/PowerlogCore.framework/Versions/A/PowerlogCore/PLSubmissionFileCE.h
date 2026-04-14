@interface PLSubmissionFileCE : PLSubmissionFile

- (id)fileType;
- (id)initWithConfig:(id)a0;
- (id)fileExtension;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (id)getCESQLFile;
- (BOOL)performCopyTablesToDB:(id)a0;
- (id)tablesToMigrateForCE;

@end
