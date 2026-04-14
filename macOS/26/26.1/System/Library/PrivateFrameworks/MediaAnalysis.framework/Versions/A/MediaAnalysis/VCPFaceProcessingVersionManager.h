@class PHPhotoLibrary, NSDictionary;

@interface VCPFaceProcessingVersionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_versionState;
}

+ (id)sharedManagerForPhotoLibrary:(id)a0;

- (int)currentProcessingVersion;
- (int)defaultProcessingVersion;
- (int)_updateCurrentProcessingVersion:(int)a0;
- (id)_versionStateURL;
- (int)migrateFaceProcessingToVersion:(int)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (int)resetAnalysisStateWithError:(id *)a0;
- (BOOL)_updateVersionStateFileWithError:(id *)a0;

@end
