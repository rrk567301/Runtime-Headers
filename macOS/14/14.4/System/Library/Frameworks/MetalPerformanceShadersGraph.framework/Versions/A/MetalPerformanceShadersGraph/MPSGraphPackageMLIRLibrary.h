@class NSMutableDictionary;

@interface MPSGraphPackageMLIRLibrary : MPSGraphObject {
    NSMutableDictionary *_mlirLibrary;
}

- (id)init;
- (void).cxx_destruct;
- (id)getDict;
- (id)getOptimizedNoDeviceMLIRLibrary;
- (void)addOptimizedMLIRFile:(id)a0 withSignature:(id)a1;
- (void)addOptimizedNoDeviceMLIRFile:(id)a0 withSignature:(id)a1;
- (void)addOptimizedNoDeviceResourcesUsed:(id)a0 withSignature:(id)a1;
- (void)addOptimizedResourcesUsed:(id)a0 withSignature:(id)a1;
- (void)addOriginalMLIRFile:(id)a0;
- (void)addOriginalResourcesUsed:(id)a0;
- (id)getCallablesDescription;
- (id)getOptimizedMLIRLibrary;
- (id)getOptimizedNoDeviceResourcesUsedLibrary;
- (id)getOptimizedResourcesUsedLibrary;
- (id)getOriginalResourcesUsed;
- (id)getResourceOffsetsLibrary;
- (unsigned long long)getResourceStorageMode;
- (id)initWithMLIRLibraryDict:(id)a0;
- (BOOL)optimizedFileExistsWithSignature:(id)a0;
- (BOOL)optimizedNoDeviceFileExistsWithSignature:(id)a0;
- (BOOL)originalFileExists;
- (void)setCallablesDescription:(id)a0;
- (void)setResourceStorageMode:(unsigned long long)a0;
- (void)updateWithMLIRLibrary:(id)a0;

@end
