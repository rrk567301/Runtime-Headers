@class PFVideoExportRangeCoordinator, NSString, NSURL;

@interface PHMediaFormatConversionDestination : PHMediaFormatConversionContent {
    NSURL *_temporaryFilesURLToDelete;
    NSURL *_temporaryOutputDirectoryURL;
    NSURL *_temporaryOutputFileURL;
}

@property (retain) PFVideoExportRangeCoordinator *singlePassVideoExportRangeCoordinator;
@property (retain) NSString *outputPathExtension;
@property (readonly) NSURL *temporaryOutputDirectoryURL;
@property (readonly) NSURL *temporaryOutputFileURL;
@property (readonly) char usesSinglePassVideoConversion;
@property unsigned long long singlePassVideoConversionTargetLength;

+ (id)destinationForConversionReturningUnchangedSource:(id)a0;
+ (id)sharedCleanupQueue;

- (void)dealloc;
- (unsigned long long)length;
- (void).cxx_destruct;
- (void)removeTemporaryFiles;
- (char)waitForAvailabilityOfRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 timeout:(unsigned long long)a1 error:(id *)a2;
- (void)addAvailableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)createTemporaryOutputDirectoryWithError:(id *)a0;
- (char)createTemporaryOutputFileWithErrorError:(id *)a0;
- (void)enableSinglePassVideoConversionWithTargetLength:(unsigned long long)a0;
- (id)errorForSinglePassVideoConversionError:(id)a0;
- (void)generateTemporaryOutputFileURLForRequest:(id)a0;
- (char)padImageToLength:(unsigned long long)a0 fileHandle:(id)a1 error:(id *)a2;
- (char)padToLength:(unsigned long long)a0 error:(id *)a1;
- (char)padVideoToLength:(unsigned long long)a0 fileHandle:(id)a1 error:(id *)a2;
- (void)removeTemporaryFilesWithCompletionHandler:(id /* block */)a0;
- (id)temporaryDirectoryPrefix;

@end
