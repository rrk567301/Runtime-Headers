@interface SLVirtualDisplayCapabilities : NSObject

@property (readonly, nonatomic) struct { unsigned int width; unsigned int height; } maximumSizeInPixels;
@property (readonly, nonatomic) struct { float width; float height; } maximumPixelsPerPoint;
@property (readonly, nonatomic) struct { float width; float height; } minimumPixelsPerPoint;
@property (readonly, nonatomic) float minimumRefreshRate;

- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;
- (id)init;

@end
