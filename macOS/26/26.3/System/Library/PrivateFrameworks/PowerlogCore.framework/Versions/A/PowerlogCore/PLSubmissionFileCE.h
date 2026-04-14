@interface PLSubmissionFileCE : PLSubmissionFile

- (id)fileExtension;
- (id)initWithConfig:(id)a0;
- (id)fileType;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (id)getCESQLFile;
- (BOOL)performCopyTablesToDB:(id)a0;
- (id)tablesToMigrateForCE;

@end
