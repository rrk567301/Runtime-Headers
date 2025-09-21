@interface _MNMapPointWithIndex : NSObject

@property (nonatomic) struct Matrix<double, 2, 1> { double _e[2]; } point;
@property (nonatomic) unsigned long long index;
@property (nonatomic) char isStartOfSegment;
@property (nonatomic) char isPolylineA;
@property (nonatomic) char isFlipped;
@property (nonatomic) struct LineSegment<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _origin; struct Matrix<double, 2, 1> { double _e[2]; } _direction; } segment;

- (id).cxx_construct;

@end
