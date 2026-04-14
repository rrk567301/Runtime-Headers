@interface PLSubmissionFileCE : PLSubmissionFile

- (id)initWithConfig:(id)a0;
- (id)fileType;
- (id)fileExtension;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (id)getCESQLFile;
- (BOOL)performCopyTablesToDB:(id)a0;
- (id)tablesToMigrateForCE;

@end
