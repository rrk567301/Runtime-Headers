@class NSArray, RS3DSurface;

@interface RSRecessedArea : NSObject <NSCopying> {
    NSArray *recessedWalls;
    NSArray *bayWindows;
    RS3DSurface *frontOpening;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
