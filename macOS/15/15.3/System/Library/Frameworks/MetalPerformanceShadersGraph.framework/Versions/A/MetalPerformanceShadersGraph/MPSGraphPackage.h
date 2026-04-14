@class NSURL, NSFileManager, NSMutableDictionary;

@interface MPSGraphPackage : MPSGraphObject {
    NSURL *_packageURL;
    NSURL *_temporaryPackageURL;
    NSFileManager *_fileManager;
    NSMutableDictionary *_plistRoot;
    unsigned long long _mlirFileCount;
}

+ (id)getResourceFileName;
+ (void)readResources:(id)a0 fromURL:(id)a1 usingAllocator:(struct function_ref<char *(llvm::StringRef, unsigned long long, unsigned long long)> { void /* function */ *x0; long long x1; })a2;

- (void).cxx_destruct;
- (id)initWithSourcePackageURL:(id)a0 error:(id *)a1;
- (id)writeResources:(struct ArrayRef<mlir::mps::MPSResourceBlobEntry *> { struct MPSResourceBlobEntry **x0; unsigned long long x1; })a0;
- (void)createBytecodeFromMlirModule:(struct ModuleOp { struct Operation *x0; })a0 fileHandle:(id)a1 resourceStorageMode:(unsigned long long)a2;
- (id)createFileHandle;
- (void)createVersionedBytecodeFromMlirModule:(struct ModuleOp { struct Operation *x0; })a0 packageKey:(id)a1 fileHandle:(id)a2 resourceStorageMode:(unsigned long long)a3 downgradedModuleCallback:(struct function_ref<void (mlir::mps::serialization::ModuleOp)> { void /* function */ *x0; long long x1; })a4;
- (id)findLatestPackage;
- (id)findLatestPackageKey;
- (id)getMLIRLibrary;
- (id)getPackageKeyForPlatform:(unsigned long long)a0 andMinimumDeploymentTarget:(struct optional<MPSGraphOperatingSystemVersion> { union { char x0; struct MPSGraphOperatingSystemVersion { long long x0; long long x1; long long x2; } x1; } x0; BOOL x1; })a1;
- (id)getPlistData;
- (id)initWithPackageURL:(id)a0 temporaryPackageURL:(id)a1 append:(BOOL)a2;
- (id)initWithSourcePackageURL:(id)a0;
- (void)setMLIRLibrary:(id)a0 withPackageKey:(id)a1;

@end
