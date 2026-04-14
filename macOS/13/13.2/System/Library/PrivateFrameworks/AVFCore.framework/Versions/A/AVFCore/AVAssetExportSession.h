@class NSString, AVAsset, NSURL, NSError, AVAssetExportSessionInternal;

@interface AVAssetExportSession : NSObject {
    AVAssetExportSessionInternal *_exportSession;
}

@property (readonly, nonatomic) NSString *presetName;
@property (readonly, retain, nonatomic) AVAsset *asset;
@property (copy, nonatomic) NSString *outputFileType;
@property (copy, nonatomic) NSURL *outputURL;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) float progress;

+ (id)allExportPresets;
+ (id)exportPresetsCompatibleWithAsset:(id)a0;
+ (void)determineCompatibilityOfExportPreset:(id)a0 withAsset:(id)a1 outputFileType:(id)a2 completionHandler:(id /* block */)a3;
+ (id)exportSessionWithAsset:(id)a0 presetName:(id)a1;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumDurationForPreset:(id)a0 properties:(id)a1;
+ (long long)estimatedOutputFileLengthForPreset:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 properties:(id)a2;
+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)metadata;
- (void)setMetadata:(id)a0;
- (id)supportedFileTypes;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)videoComposition;
- (void)setVideoComposition:(id)a0;
- (id)customVideoCompositor;
- (id)audioMix;
- (void)setAudioMix:(id)a0;
- (id)audioTimePitchAlgorithm;
- (void)setAudioTimePitchAlgorithm:(id)a0;
- (BOOL)maximizePowerEfficiency;
- (void)setMaximizePowerEfficiency:(BOOL)a0;
- (id)directoryForTemporaryFiles;
- (void)setDirectoryForTemporaryFiles:(id)a0;
- (unsigned long long)audioTrackGroupHandling;
- (id)metadataItemFilter;
- (void)estimateMaximumDurationWithCompletionHandler:(id /* block */)a0;
- (void)estimateOutputFileLengthWithCompletionHandler:(id /* block */)a0;
- (id)initWithAsset:(id)a0 presetName:(id)a1;
- (void)determineCompatibleFileTypesWithCompletionHandler:(id /* block */)a0;
- (void)AVExportSessionExportAsynchronouslyCompletionHandler;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)cancelExport;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxDuration;
- (void)setMinVideoFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minVideoFrameDuration;
- (void)setVideoFrameRateConversionAlgorithm:(id)a0;
- (id)videoFrameRateConversionAlgorithm;
- (void)setPreserveSyncFrames:(BOOL)a0;
- (BOOL)preserveSyncFrames;
- (long long)estimatedOutputFileLength;
- (void)setMetadataItemFilter:(id)a0;
- (long long)fileLengthLimit;
- (void)setFileLengthLimit:(long long)a0;
- (void)setAudioTrackGroupHandling:(unsigned long long)a0;
- (BOOL)canPerformMultiplePassesOverSourceMediaData;
- (void)setCanPerformMultiplePassesOverSourceMediaData:(BOOL)a0;

@end
