@interface PKLeopardPackage : PKPackage

- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)payloadExtractorWithDestination:(id)a0 externalRoot:(id)a1 error:(id *)a2;
- (id)BOMData;
- (id)_staticObsoleteFiles;
- (id)_staticObsoleteDirectories;
- (id)_staticObsoleteFilesOrRecursiveDirectories;
- (BOOL)_payloadLargeAndSegmented;
- (id)_archiveSubpathWithFileName:(id)a0;
- (id)_payloadPathWithOutputPayloadOffset:(unsigned long long *)a0 withIsLargeAndSegmented:(BOOL *)a1 withError:(id *)a2;
- (id)scriptsSubpath;
- (id)_staticObsoleteListAtRelativeSubpath:(id)a0;
- (id)scriptsExtractorWithDestination:(id)a0 error:(id *)a1;

@end
