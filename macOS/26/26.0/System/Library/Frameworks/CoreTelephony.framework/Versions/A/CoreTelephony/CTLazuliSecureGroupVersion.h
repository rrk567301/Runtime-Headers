@class NSNumber;

@interface CTLazuliSecureGroupVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *era;
@property (copy, nonatomic) NSNumber *epoch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const struct SecureGroupVersion { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)isEqualToCTLazuliSecureGroupVersion:(id)a0;

@end
