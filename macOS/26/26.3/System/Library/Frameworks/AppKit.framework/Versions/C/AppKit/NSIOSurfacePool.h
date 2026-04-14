@class NSDictionary, IOSurface, NSMutableArray;

@interface NSIOSurfacePool : NSObject {
    NSDictionary *_surfaceProperties;
    NSMutableArray *_surfaces;
}

@property (readonly, copy) NSDictionary *surfaceProperties;
@property (readonly) IOSurface *nextUnusedSurface;

- (id)init;
- (void)dealloc;
- (id)initWithSurfaceProperties:(id)a0;

@end
