@class NSDate, NSString, NSURL, NSError, PFAssetAdjustments, NSArray, AVAssetExportSession, AVAudioMix, NSObject, CLLocation, AVVideoComposition, AVAsset;
@protocol OS_dispatch_queue;

@interface PFVideoSharingOperation : NSOperation {
    AVAsset *_videoAsset;
    AVAudioMix *_audioMix;
    AVVideoComposition *_videoComposition;
    NSArray *_videoMetadata;
    NSObject<OS_dispatch_queue> *_externalIsolation;
    AVAssetExportSession *_exportSession;
    char _beganExport;
    char _operationSuccess;
    NSError *_operationError;
}

@property (copy, nonatomic, setter=_setVideoURL:) NSURL *videoURL;
@property (retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments;
@property (nonatomic, setter=_setSuccess:) char success;
@property (retain, nonatomic, setter=_setOperationError:) NSError *operationError;
@property (copy, nonatomic) NSURL *outputDirectoryURL;
@property (copy, nonatomic) NSString *outputFilename;
@property (nonatomic) char shouldStripMetadata;
@property (nonatomic) char shouldStripLocation;
@property (copy, nonatomic) CLLocation *customLocation;
@property (copy, nonatomic) NSDate *customDate;
@property (nonatomic) char shouldStripCaption;
@property (copy, nonatomic) NSString *customCaption;
@property (nonatomic) char shouldStripAccessibilityDescription;
@property (copy, nonatomic) NSString *customAccessibilityLabel;
@property (copy, nonatomic) NSString *exportPreset;
@property (copy, nonatomic) NSString *exportFileType;
@property (readonly, nonatomic) float progress;
@property (readonly, copy, nonatomic) NSURL *resultingFileURL;

+ (id)operationErrorWithCode:(long long)a0 underlyingError:(id)a1 withDescription:(id)a2;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (char)_ensureVideoProperties;
- (char)_runExport;
- (void)_validateMetadata;
- (id)initWithVideoURL:(id)a0 adjustmentData:(id)a1;

@end
