@class NSString;

@interface VNRecognizedPoint3D : VNPoint3D

@property (readonly, copy) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPosition:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 identifier:(id)a1;

@end
