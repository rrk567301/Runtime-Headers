@interface AVZoomRange : NSObject

@property (readonly, nonatomic) double minZoomFactor;
@property (readonly, nonatomic) double maxZoomFactor;

+ (id)zoomRangeWithMinZoomFactor:(double)a0 maxZoomFactor:(double)a1;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)containsZoomFactor:(double)a0;
- (id)initWithMinZoomFactor:(double)a0 maxZoomFactor:(double)a1;

@end
