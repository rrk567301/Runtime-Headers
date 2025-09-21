@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)fileType;
- (id)fileExtension;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (id)getBDCPlistFile;
- (BOOL)copyAndPrepareLog;
- (id)getEPSQLFile;
- (id)getListOfRequiredBDCFiles;

@end
