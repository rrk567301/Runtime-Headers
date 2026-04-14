@class NSURL, NSFileManager, NSJSONSerialization;

@interface MetalPackage : NSObject {
    NSURL *_packageURL;
    NSURL *_temporaryPackageURL;
    NSFileManager *_fileManager;
    NSJSONSerialization *_jsonSerializer;
    BOOL _ml;
    struct unique_ptr<llvm::LockFileManager, std::default_delete<llvm::LockFileManager>> { struct LockFileManager *__ptr_; } _temporaryPackageFileLock;
    struct unique_ptr<InProcessPackageWritingGuard::LockGuard, std::default_delete<InProcessPackageWritingGuard::LockGuard>> { struct LockGuard *__ptr_; } _writingLockGuard;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getJsonData;
- (id)initWithPackageURL:(id)a0 temporaryPackageURL:(id)a1;

@end
