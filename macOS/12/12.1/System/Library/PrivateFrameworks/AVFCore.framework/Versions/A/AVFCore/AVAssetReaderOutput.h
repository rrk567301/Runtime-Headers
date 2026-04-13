@class NSString, NSDictionary, AVWeakReference, AVAssetReaderOutputInternal;

@interface AVAssetReaderOutput : NSObject {
    AVAssetReaderOutputInternal *_internal;
}

@property (readonly, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;
@property (nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;
@property (readonly, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;
@property (readonly, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;
@property (readonly, nonatomic) NSString *mediaType;
@property (nonatomic) BOOL alwaysCopiesSampleData;

+ (void)initialize;
+ (id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)a0 withFormatDescription:(id)a1;

- (void)dealloc;
- (id)init;
- (long long)_status;
- (BOOL)_isFinished;
- (id)_asset;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (id)_errorForOSStatus:(int)a0;
- (void)_attachToWeakReferenceToAssetReader:(id)a0;
- (BOOL)_prepareForReadingReturningError:(id *)a0;
- (void)_cancelReading;
- (struct OpaqueFigAssetReader { } *)_figAssetReader;
- (BOOL)supportsRandomAccess;
- (id)currentTimeRanges;
- (BOOL)maximizePowerEfficiency;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader { } *)a0;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (void)_markAsFinished;
- (void)markConfigurationAsFinal;
- (BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(id *)a0;
- (void)setMaximizePowerEfficiency:(BOOL)a0;
- (void)setSupportsRandomAccess:(BOOL)a0;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)a0;
- (void)resetForReadingTimeRanges:(id)a0;
- (void)_figAssetReaderDecodeError;
- (void)_figAssetReaderFailed;

@end
