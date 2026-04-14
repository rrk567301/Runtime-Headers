@interface CCDisplayCameraDescriptor : CCDataDescriptor

@property (nonatomic) void /* unknown type, empty encoding */ cameraSize;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) void /* unknown type, empty encoding */ tanAngleSize;
@property (nonatomic) struct CCTanAngleRange { float minX; float maxX; float minY; float maxY; } tanAngleRange;
@property (nonatomic) struct CCTanAngleRange { float minX; float maxX; float minY; float maxY; } invalidTanAngleRange;
@property (nonatomic) BOOL rollingShutterCompensationEnabled;
@property (nonatomic) BOOL computeYStart;
@property (nonatomic) BOOL enableGPUYStartSupport;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;

@end
