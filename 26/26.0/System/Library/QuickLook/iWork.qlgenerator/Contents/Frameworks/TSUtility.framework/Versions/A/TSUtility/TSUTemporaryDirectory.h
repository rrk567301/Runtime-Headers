@class NSString, NSURL;

@interface TSUTemporaryDirectory : NSObject {
    NSString *_path;
    BOOL _leak;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSURL *URL;

- (id)initWithError:(id *)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_createDirectoryWithSignature:(id)a0 subdirectory:(id)a1 error:(id *)a2;
- (id)initForWritingToURL:(id)a0 error:(id *)a1;
- (id)initWithSignature:(id)a0 error:(id *)a1;
- (id)initWithSignature:(id)a0 subdirectory:(id)a1 error:(id *)a2;
- (void)leakTemporaryDirectory;
- (void)removeDirectory;
- (void)setAssociatedLifetimeObject:(id)a0;

@end
