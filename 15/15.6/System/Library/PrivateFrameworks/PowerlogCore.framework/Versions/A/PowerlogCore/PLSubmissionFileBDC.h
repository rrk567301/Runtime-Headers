@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)fileExtension;
- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (id)getBDCPlistFile;
- (char)copyAndPrepareLog;
- (id)getEPSQLFile;
- (id)getListOfRequiredBDCFiles;

@end
