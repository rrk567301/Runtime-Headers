@class NSString;

@interface TSUTemporaryDirectory : NSObject {
    NSString *_path;
    BOOL _leak;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)path;
- (id)URL;
- (id)initWithError:(id *)a0;
- (id)initWithSignature:(id)a0 error:(id *)a1;
- (id)initWithSignature:(id)a0 subdirectory:(id)a1 error:(id *)a2;
- (id)initForWritingToURL:(id)a0 error:(id *)a1;
- (void)leakTemporaryDirectory;
- (BOOL)_createDirectoryWithSignature:(id)a0 subdirectory:(id)a1 error:(id *)a2;
- (void)removeDirectory;

@end
