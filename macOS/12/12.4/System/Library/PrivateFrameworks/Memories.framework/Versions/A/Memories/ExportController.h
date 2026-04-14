@class NSArray, NSString, NSTimer, Project, BEAlertController;
@protocol MovieControllerExportProtocol;

@interface ExportController : NSObject {
    BOOL m_inTestMode;
    BOOL m_usingExistingRenderFile;
}

@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) NSArray *presets;
@property (retain, nonatomic) NSString *currentPreset;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) id<MovieControllerExportProtocol> movieController;
@property (retain, nonatomic) NSString *exportPath;
@property (retain, nonatomic) NSArray *exportedPaths;
@property (nonatomic) BOOL exportToPhotos;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (nonatomic) unsigned long long exportingIndexPresets;
@property (nonatomic) double exportAspect;
@property (retain, nonatomic) BEAlertController *testModeAutoExportCompletedAlert;

+ (void)exitTestMode;
+ (BOOL)inTestMode;
+ (id)testModeProjectBundle;
+ (unsigned long long)testModeRepeatCount;
+ (unsigned long long)dataRateForPreset:(id)a0;
+ (unsigned long long)videoDataRateForPreset:(id)a0;
+ (unsigned long long)audioDataRateForPreset:(id)a0;
+ (unsigned long long)dataRateForiCloudHD;
+ (unsigned long long)dataRateForiCloud4G;
+ (BOOL)testModeCopyToCameraRoll;
+ (BOOL)testModeNoDialogAtEnd;
+ (Class)exportControllerClass;
+ (id)testModeProjectPlaceholder;
+ (id)testModeProject:(id)a0;
+ (unsigned long long)testModeType;
+ (unsigned long long)testModeMaxFrameToProcess;
+ (id)currentTitle:(unsigned long long)a0;
+ (unsigned long long)estimatedVideoFileSizeForDuration:(int)a0 frameRate:(double)a1 preset:(id)a2 project:(id)a3;

- (void)dealloc;
- (float)progress;
- (id)thumbnailImage;
- (void)cancelExport;
- (void)closeSession;
- (void)displayError:(id)a0;
- (void)createMovieController;
- (id)initWithWithProject:(id)a0 presets:(id)a1 exportToPhotos:(BOOL)a2 delegate:(id)a3;
- (void)beginAsynchronousExport;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (void)releaseMovieController;
- (void)nextPreset;
- (id)hasExistingFile;
- (void)updateProgressViewWithProgress:(float)a0 reduced:(BOOL)a1;
- (void)writeVideoFileToSavedPhotoAlbum:(id)a0;
- (void)continueExportAfterDelay;
- (void)displayExportedToPhotos;
- (void)displayDiskSpaceError;
- (void)informDelegateOfCompletion;
- (void)displayAlertTitle:(id)a0 message:(id)a1;
- (void)serviceProgressTimer:(id)a0;
- (void)noteSessionProgressed:(float)a0;
- (id)metadataToAdd;

@end
