@class PHPhotoLibrary, NSDictionary;

@interface VCPFaceProcessingVersionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_versionState;
}

+ (id)sharedManagerForPhotoLibrary:(id)a0;

- (int)_updateCurrentProcessingVersion:(int)a0;
- (id)_versionStateURL;
- (void).cxx_destruct;
- (int)currentProcessingVersion;
- (BOOL)_updateVersionStateFileWithError:(id *)a0;
- (int)defaultProcessingVersion;
- (int)resetAnalysisStateWithError:(id *)a0;
- (int)migrateFaceProcessingToVersion:(int)a0;
- (id)initWithPhotoLibrary:(id)a0;

@end
