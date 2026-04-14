@class NSURL, NSString, SMNetworkSourceProxy;

@interface SMCopyEngineNetworkCopier : SMCopyEngineFileCopier <SMYaaActionDelegate> {
    NSURL *absoluteBaseSourcePath;
    NSURL *absoluteDestinationBasePath;
    long long operationCompletedSize;
    long long currentFileCompletedSize;
    NSString *lastSkippedFile;
}

@property (retain) SMNetworkSourceProxy *proxy;
@property BOOL rosvSource;

- (void).cxx_destruct;
- (BOOL)processReturningError:(id *)a0;
- (BOOL)copyFrom:(id)a0 relativeFrom:(id)a1 to:(id)a2 error:(id *)a3;
- (void)updateCompletedFilePermissions:(id)a0;
- (void)fileFinishedFromArchiver:(id)a0 totalSize:(unsigned long long)a1;
- (void)yaaFileFinished:(id)a0 filePath:(id)a1 totalSize:(unsigned long long)a2;
- (void)translateUID:(unsigned int *)a0 andGID:(unsigned int *)a1;
- (id)initWithProxy:(id)a0 rosvSource:(BOOL)a1;
- (void)bomCopierCopyFileUpdate:(struct _BOMCopier { } *)a0 filePath:(const char *)a1 totalSizeCopied:(long long)a2;
- (void)bomCopierCopyFileFinished:(struct _BOMCopier { } *)a0 filePath:(const char *)a1 type:(int)a2 totalSize:(long long)a3 result:(int)a4;
- (void)bomCopierEncounteredFatalError:(struct _BOMCopier { } *)a0 message:(const char *)a1;
- (void)bomCopierEncounteredFatalFileError:(struct _BOMCopier { } *)a0 atPath:(const char *)a1 error:(int)a2;
- (int)bomCopierEncounteredFileError:(struct _BOMCopier { } *)a0 atPath:(const char *)a1 error:(int)a2;

@end
