@class NSString;

@interface VNRecognizedPoint3D : VNPoint3D

@property (readonly, copy) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPosition:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 identifier:(id)a1;

@end
