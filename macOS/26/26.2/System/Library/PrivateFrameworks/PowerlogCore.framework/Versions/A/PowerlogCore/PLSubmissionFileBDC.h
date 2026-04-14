@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)fileType;
- (id)initWithConfig:(id)a0;
- (id)fileExtension;
- (void)submit;
- (id)getBDCPlistFile;
- (BOOL)copyAndPrepareLog;
- (id)getEPSQLFile;
- (id)getListOfRequiredBDCFiles;

@end
