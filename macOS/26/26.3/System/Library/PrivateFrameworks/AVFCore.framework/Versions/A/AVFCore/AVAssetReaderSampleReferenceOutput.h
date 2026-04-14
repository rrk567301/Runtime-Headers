@class AVAssetTrack, AVAssetReaderSampleReferenceOutputInternal;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property (readonly, nonatomic) AVAssetTrack *track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)a0;

- (id)_asset;
- (id)description;
- (id)init;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)mediaType;
- (void)dealloc;
- (BOOL)_trimsSampleDurations;
- (id)initWithTrack:(id)a0;

@end
