@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)fileExtension;
- (id)initWithConfig:(id)a0;
- (id)fileType;
- (void)submit;
- (id)getBDCPlistFile;
- (BOOL)copyAndPrepareLog;
- (id)getEPSQLFile;
- (id)getListOfRequiredBDCFiles;

@end
