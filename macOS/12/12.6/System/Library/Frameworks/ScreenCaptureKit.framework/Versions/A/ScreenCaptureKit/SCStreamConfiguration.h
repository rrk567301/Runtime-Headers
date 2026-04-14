@interface SCStreamConfiguration : NSObject

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

- (id)init;

@end
