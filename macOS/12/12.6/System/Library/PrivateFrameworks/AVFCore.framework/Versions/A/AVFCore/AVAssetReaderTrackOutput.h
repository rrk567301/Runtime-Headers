@class NSString, AVAssetTrack, NSDictionary, AVAssetReaderTrackOutputInternal;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property (readonly, nonatomic, getter=_isAttachedToAdaptor) BOOL attachedToAdaptor;
@property (readonly, nonatomic) AVAssetTrack *track;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderTrackOutputWithTrack:(id)a0 outputSettings:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)mediaType;
- (id)_asset;
- (BOOL)appliesPreferredTrackTransform;
- (void)setAppliesPreferredTrackTransform:(BOOL)a0;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (void)_setAttachedAdaptor:(id)a0;
- (BOOL)_trimsSampleDurations;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)_figAssetReaderExtractionOptions;
- (id)initWithTrack:(id)a0 outputSettings:(id)a1;
- (id)_formatDescriptions;
- (unsigned int)_getUniformMediaSubtypeIfExists;
- (id)_attachedAdaptor;
- (struct opaqueCMSampleBuffer { } *)_copyNextSampleBufferForAdaptor;

@end
