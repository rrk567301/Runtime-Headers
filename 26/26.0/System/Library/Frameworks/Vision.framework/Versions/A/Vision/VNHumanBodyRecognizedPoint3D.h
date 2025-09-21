@class NSString;

@interface VNHumanBodyRecognizedPoint3D : VNRecognizedPoint3D

@property (readonly) struct { void /* unknown type, empty encoding */ columns[4]; } localPosition;
@property (readonly) NSString *parentJoint;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelPosition:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 localPosition:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 jointName:(id)a2 parentJoint:(id)a3;

@end
