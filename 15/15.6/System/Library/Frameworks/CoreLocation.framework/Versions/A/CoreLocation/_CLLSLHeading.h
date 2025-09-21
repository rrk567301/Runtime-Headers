@class _CLLSLHeadingSupplInfo, _CLLSLLocation;

@interface _CLLSLHeading : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } rotationFromGlobalToDeviceFrame;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } rotationFromGlobalToCameraFrame;
@property (nonatomic) void /* unknown type, empty encoding */ rotationalAccuracyInRadians;
@property (nonatomic) double confidence;
@property (nonatomic) unsigned long long globalReferenceFrame;
@property (copy, nonatomic) _CLLSLLocation *location;
@property (copy, nonatomic) _CLLSLHeadingSupplInfo *supplemantaryInfo;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;

@end
