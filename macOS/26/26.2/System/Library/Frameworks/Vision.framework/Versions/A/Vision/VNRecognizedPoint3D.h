@class NSString;

@interface VNRecognizedPoint3D : VNPoint3D

@property (readonly, copy) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPosition:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 identifier:(id)a1;

@end
