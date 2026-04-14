@class IOSurface;

@interface SLSScreenshotResult : NSObject

@property (readonly) int status;
@property (readonly) IOSurface *frameSurfaceSDR;
@property (readonly) IOSurface *frameSurfaceHDR;

- (void)dealloc;
- (id)initWithStatus:(int)a0 frameSurfaceSDR:(id)a1 frameSurfaceHDR:(id)a2;

@end
