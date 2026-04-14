@class PHPhotoLibrary, NSDictionary;

@interface VCPFaceProcessingVersionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_versionState;
}

+ (id)sharedManagerForPhotoLibrary:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (int)resetAnalysisStateWithError:(id *)a0;
- (BOOL)_updateVersionStateFileWithError:(id *)a0;
- (int)defaultProcessingVersion;
- (int)_updateCurrentProcessingVersion:(int)a0;
- (void).cxx_destruct;
- (int)migrateFaceProcessingToVersion:(int)a0;
- (int)currentProcessingVersion;
- (id)_versionStateURL;

@end
