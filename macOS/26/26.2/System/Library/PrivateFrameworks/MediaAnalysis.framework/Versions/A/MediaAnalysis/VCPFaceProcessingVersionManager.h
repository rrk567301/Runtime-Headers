@class PHPhotoLibrary, NSDictionary;

@interface VCPFaceProcessingVersionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_versionState;
}

+ (id)sharedManagerForPhotoLibrary:(id)a0;

- (int)currentProcessingVersion;
- (id)initWithPhotoLibrary:(id)a0;
- (int)migrateFaceProcessingToVersion:(int)a0;
- (void).cxx_destruct;
- (int)_updateCurrentProcessingVersion:(int)a0;
- (int)resetAnalysisStateWithError:(id *)a0;
- (int)defaultProcessingVersion;
- (id)_versionStateURL;
- (BOOL)_updateVersionStateFileWithError:(id *)a0;

@end
