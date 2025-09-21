@class AVAssetTrack, AVAssetReaderSampleReferenceOutputInternal;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property (readonly, nonatomic) AVAssetTrack *track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)mediaType;
- (id)_asset;
- (char)_enableTrackExtractionReturningError:(id *)a0;
- (char)_trimsSampleDurations;
- (id)initWithTrack:(id)a0;

@end
