@class PHPhotoLibrary, NSDictionary;

@interface VCPFaceProcessingVersionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_versionState;
}

+ (id)resetLevelDescription:(long long)a0;
+ (id)sharedManagerForPhotoLibrary:(id)a0;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (int)migrateFaceProcessingToVersion:(int)a0;
- (int)_updateCurrentProcessingVersion:(int)a0;
- (char)_updateVersionStateFileWithError:(id *)a0;
- (id)_versionStateURL;
- (int)currentProcessingVersion;
- (int)defaultProcessingVersion;
- (int)resetAnalysisDataWithResetLevel:(long long)a0 error:(id *)a1;

@end
