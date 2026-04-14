@interface SCStreamConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isUntransformFrameForSingleWindowSharing) BOOL untransformFrameForSingleWindowSharing;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumFrameInterval;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) BOOL scalesToFit;
@property (nonatomic) BOOL showsCursor;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationRect;
@property (nonatomic) long long queueDepth;
@property (nonatomic) const struct __CFString { } *colorMatrix;
@property (nonatomic) const struct __CFString { } *colorSpaceName;
@property (nonatomic) BOOL capturesAudio;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channelCount;
@property (nonatomic) BOOL excludesCurrentProcessAudio;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSCStreamConfiguration:(id)a0;

@end
