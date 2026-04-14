@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)initWithConfig:(id)a0;
- (id)fileType;
- (id)fileExtension;
- (void)submit;
- (id)getBDCPlistFile;
- (BOOL)copyAndPrepareLog;
- (id)getEPSQLFile;
- (id)getListOfRequiredBDCFiles;

@end
