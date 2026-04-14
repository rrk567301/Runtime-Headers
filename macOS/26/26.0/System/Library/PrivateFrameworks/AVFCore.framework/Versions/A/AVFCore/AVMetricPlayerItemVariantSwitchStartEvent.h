@class AVAssetVariant, NSArray, AVMetricMediaRendition;

@interface AVMetricPlayerItemVariantSwitchStartEvent : AVMetricEvent {
    AVAssetVariant *_fromVariant;
    AVAssetVariant *_toVariant;
    AVMetricMediaRendition *_videoRendition;
    AVMetricMediaRendition *_audioRendition;
    AVMetricMediaRendition *_subtitleRendition;
    NSArray *_loadedTimeRanges;
}

@property (readonly) AVAssetVariant *fromVariant;
@property (readonly) AVAssetVariant *toVariant;
@property (readonly) NSArray *loadedTimeRanges;
@property (readonly) AVMetricMediaRendition *videoRendition;
@property (readonly) AVMetricMediaRendition *audioRendition;
@property (readonly) AVMetricMediaRendition *subtitleRendition;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 fromVariant:(id)a3 toVariant:(id)a4 videoRendition:(id)a5 audioRendition:(id)a6 subtitleRendition:(id)a7 loadedTimeRanges:(id)a8;

@end
