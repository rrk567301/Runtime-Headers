@interface CTLazuliOperationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long registrationState;
@property (nonatomic) long long switchState;
@property (nonatomic) long long cellularDataRequirement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct OperationStatus { int x0; int x1; int x2; } *)a0;
- (char)isEqualToCTLazuliOperationStatus:(id)a0;

@end
