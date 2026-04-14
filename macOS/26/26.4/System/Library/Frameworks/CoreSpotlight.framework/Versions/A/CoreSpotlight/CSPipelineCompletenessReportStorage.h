@class NSURL;

@interface CSPipelineCompletenessReportStorage : NSObject {
    NSURL *_storageURL;
}

+ (id)defaultInstance;

- (void).cxx_destruct;
- (BOOL)_createStorageDirectoryIfNotExistsWithError:(id *)a0;
- (id)_fileURLForPipeline:(id)a0;
- (id)fetchCompletenessReportsForPipeline:(id)a0 error:(id *)a1;
- (id)initWithStorageURL:(id)a0;
- (BOOL)writeCompletenessReports:(id)a0 forPipeline:(id)a1 error:(id *)a2;

@end
