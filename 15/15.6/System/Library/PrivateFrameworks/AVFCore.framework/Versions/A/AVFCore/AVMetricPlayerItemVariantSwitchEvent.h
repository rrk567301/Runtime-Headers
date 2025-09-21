@class AVAssetVariant, NSArray;

@interface AVMetricPlayerItemVariantSwitchEvent : AVMetricEvent {
    AVAssetVariant *_fromVariant;
    AVAssetVariant *_toVariant;
    NSArray *_loadedTimeRanges;
    char _didSucceed;
}

@property (readonly) AVAssetVariant *fromVariant;
@property (readonly) AVAssetVariant *toVariant;
@property (readonly) NSArray *loadedTimeRanges;
@property (readonly) char didSucceed;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 fromVariant:(id)a3 toVariant:(id)a4 loadedTimeRanges:(id)a5 didSucceed:(char)a6;

@end
