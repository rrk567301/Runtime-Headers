@class NSURL, NSFileManager, NSData;

@interface MPSGraphExecutableReflection : NSObject {
    NSURL *_mpsGraphPackageURL;
    NSFileManager *_fileManager;
    NSData *_reflectionFb;
}

- (void).cxx_destruct;
- (id)functionNames;
- (id)initWithMPSGraphPackage:(id)a0 error:(id *)a1;
- (id)inputNamesForFunction:(id)a0;
- (id)inputShapesForFunction:(id)a0;
- (id)outputNamesForFunction:(id)a0;
- (id)outputShapesForFunction:(id)a0;
- (id)inputRanksForFunction:(id)a0;
- (id)outputRanksForFunction:(id)a0;

@end
