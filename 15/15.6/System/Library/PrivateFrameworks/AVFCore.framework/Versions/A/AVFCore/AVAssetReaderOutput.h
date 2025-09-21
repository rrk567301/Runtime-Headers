@class NSString, NSDictionary, AVWeakReference, AVAssetReaderOutputInternal;

@interface AVAssetReaderOutput : NSObject {
    AVAssetReaderOutputInternal *_internal;
}

@property (readonly, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;
@property (nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;
@property (readonly, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;
@property (readonly, nonatomic, getter=_trimsSampleDurations) char trimsSampleDurations;
@property (readonly, nonatomic) NSString *mediaType;
@property (nonatomic) char alwaysCopiesSampleData;

+ (void)initialize;
+ (id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)a0 withFormatDescription:(id)a1;

- (void)dealloc;
- (id)init;
- (id)_asset;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (long long)_status;
- (struct OpaqueFigAssetReader { } *)_figAssetReader;
- (void)_markAsFinished;
- (void)_attachToWeakReferenceToAssetReader:(id)a0;
- (void)_cancelReading;
- (char)_enableTrackExtractionReturningError:(id *)a0;
- (id)_errorForOSStatus:(int)a0;
- (void)_figAssetReaderDecodeError;
- (void)_figAssetReaderFailed;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)a0;
- (char)_isFinished;
- (char)_prepareForReadingReturningError:(id *)a0;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader { } *)a0;
- (char)_updateTimeRangesOnFigAssetReaderReturningError:(id *)a0;
- (id)currentTimeRanges;
- (char)disablesMultithreadedAndAsyncVideoDecompression;
- (void)markConfigurationAsFinal;
- (char)maximizePowerEfficiency;
- (void)resetForReadingTimeRanges:(id)a0;
- (void)setDisablesMultithreadedAndAsyncVideoDecompression:(char)a0;
- (void)setMaximizePowerEfficiency:(char)a0;
- (void)setSupportsRandomAccess:(char)a0;
- (char)supportsRandomAccess;

@end
