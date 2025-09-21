@interface PHASESharedEntityDebugInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (readonly, nonatomic) int referenceCount;

- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setReferenceCount:(int)a0;

@end
