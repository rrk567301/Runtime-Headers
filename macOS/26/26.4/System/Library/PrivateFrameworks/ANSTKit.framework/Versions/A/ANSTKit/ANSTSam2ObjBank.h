@interface ANSTSam2ObjBank : NSObject

@property (nonatomic) struct __CVBuffer { } *obj_ptr;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } curTime;

- (void)dealloc;
- (id)initWithObj:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
