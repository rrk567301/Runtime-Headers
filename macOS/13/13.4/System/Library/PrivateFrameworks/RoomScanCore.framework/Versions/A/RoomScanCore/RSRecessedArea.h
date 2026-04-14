@class NSArray, RS3DSurface;

@interface RSRecessedArea : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *recessedWalls;
@property (retain, nonatomic) NSArray *bayWindows;
@property (retain, nonatomic) RS3DSurface *frontOpening;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
