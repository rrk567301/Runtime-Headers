@class NSString, AVAssetTrack, NSDictionary, AVAssetReaderTrackOutputInternal;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property (readonly, nonatomic, getter=_isAttachedToAdaptor) BOOL attachedToAdaptor;
@property (readonly, nonatomic) AVAssetTrack *track;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderTrackOutputWithTrack:(id)a0 outputSettings:(id)a1;

- (void)_setAttachedAdaptor:(id)a0;
- (id)mediaType;
- (id)_asset;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)init;
- (id)_attachedAdaptor;
- (id)description;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (id)initWithTrack:(id)a0 outputSettings:(id)a1;
- (unsigned int)_getUniformMediaSubtypeIfExists;
- (struct opaqueCMSampleBuffer { } *)_copyNextSampleBufferForAdaptor;
- (id)_figAssetReaderExtractionOptions;
- (id)_formatDescriptions;
- (BOOL)_trimsSampleDurations;
- (BOOL)appliesPreferredTrackTransform;
- (BOOL)limitsImageQueueCapacityToOneFrame;
- (void)setAppliesPreferredTrackTransform:(BOOL)a0;
- (void)setLimitsImageQueueCapacityToOneFrame:(BOOL)a0;

@end
