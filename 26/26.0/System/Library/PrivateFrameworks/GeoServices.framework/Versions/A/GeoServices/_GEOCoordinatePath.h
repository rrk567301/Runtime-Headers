@class NSArray;

@interface _GEOCoordinatePath : NSObject <NSSecureCoding> {
    struct vector<GEOLocationCoordinate3D, std::allocator<GEOLocationCoordinate3D>> { struct *__begin_; struct *__end_; struct *__cap_; } _basicCoordinates;
    struct vector<zilch::ControlPoint, std::allocator<zilch::ControlPoint>> { struct ControlPoint *__begin_; struct ControlPoint *__end_; struct ControlPoint *__cap_; } _zilchPoints;
    unsigned long long _count;
    NSArray *_supportPoints;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; double *__cap_; } _pointLengths;
    unsigned long long _pathStartIndex;
    double _pathStartOffset;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
