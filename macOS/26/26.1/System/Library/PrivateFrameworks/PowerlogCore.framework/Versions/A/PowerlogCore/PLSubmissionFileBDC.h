@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)fileType;
- (id)fileExtension;
- (void)submit;
- (id)initWithConfig:(id)a0;
- (id)getBDCPlistFile;
- (BOOL)copyAndPrepareLog;
- (id)getEPSQLFile;
- (id)getListOfRequiredBDCFiles;

@end
