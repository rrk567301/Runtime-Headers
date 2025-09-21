@class GEOMapRegion;

@interface VKCameraRegionRestriction : NSObject <NSSecureCoding> {
    struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _singleRestrictionMercator;
    struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _westOfDatelineMercator;
    struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _eastOfDatelineMercator;
    struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _singleRestrictionCoord;
    struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _westOfDatelineCoord;
    struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _eastOfDatelineCoord;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) char empty;
@property (readonly, retain, nonatomic) GEOMapRegion *mapRegion;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (char)containsCoordinate:(struct { double x0; double x1; })a0;
- (id)initWithMapRegion:(id)a0;
- (struct { double x0; double x1; })clampedCoordinate:(struct { double x0; double x1; })a0;
- (struct Matrix<double, 2, 1> { double x0[2]; })clampedPositionForOrigin:(struct Matrix<double, 2, 1> { double x0[2]; })a0 delta:(struct Matrix<double, 2, 1> { double x0[2]; })a1;
- (struct Matrix<double, 2, 1> { double x0[2]; })clampedPosition:(struct Matrix<double, 2, 1> { double x0[2]; })a0;
- (struct Matrix<double, 2, 1> { double x0[2]; })clampedPosition:(struct Matrix<double, 2, 1> { double x0[2]; })a0 usingSingleRestriction:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; })a1 westOfDatelineRestriction:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; })a2 eastOfDatelineRestriction:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; })a3 wrapRange:(struct Range<double> { double x0; double x1; })a4;
- (void)radianSingleRect:(void *)a0 westOfDatelineRect:(void *)a1 eastOfDatelineRect:(void *)a2;

@end
