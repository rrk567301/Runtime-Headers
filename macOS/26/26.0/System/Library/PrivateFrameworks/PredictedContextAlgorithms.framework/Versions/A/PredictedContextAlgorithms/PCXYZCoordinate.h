@interface PCXYZCoordinate : NSObject

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

- (id)init;
- (id)description;
- (double)distanceTo:(id)a0;
- (id)initWithX:(double)a0 y:(double)a1 z:(double)a2;

@end
