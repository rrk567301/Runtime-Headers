@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)fileExtension;
- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (id)getListOfRequiredBDCFiles;
- (id)getEPSQLFile;
- (id)getBDCPlistFile;

@end
