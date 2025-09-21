@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {
    double _params[9];
    char _shouldUsePolyShiftFunction;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) struct { double latitude; double longitude; } originalCoordinate;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) unsigned int version;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)contractFunctionTo:(id)a0 withRadius:(double)a1;
- (id)initWithPolyLocationShiftResponse:(id)a0 originalCoordinate:(struct { double x0; double x1; })a1 version:(unsigned int)a2;
- (char)isValidForCoordinate:(struct { double x0; double x1; })a0;
- (struct { double x0; double x1; })shiftedCoordinateForCoordinate:(struct { double x0; double x1; })a0 accuracy:(double *)a1;
- (id)toServerResponse;

@end
