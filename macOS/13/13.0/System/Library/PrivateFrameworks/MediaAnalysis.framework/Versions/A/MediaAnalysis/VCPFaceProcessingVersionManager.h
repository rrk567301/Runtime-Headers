@class PHPhotoLibrary, NSDictionary;

@interface VCPFaceProcessingVersionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_versionState;
}

+ (id)sharedManagerForPhotoLibrary:(id)a0;
+ (id)resetLevelDescription:(long long)a0;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_versionStateURL;
- (BOOL)_updateVersionStateFileWithError:(id *)a0;
- (int)defaultProcessingVersion;
- (int)currentProcessingVersion;
- (int)_updateCurrentProcessingVersion:(int)a0;
- (int)resetAnalysisDataWithResetLevel:(long long)a0 error:(id *)a1;
- (int)migrateFaceProcessingToVersion:(int)a0;

@end
