@class NSString, CTLazuliSecureGroupVersion;

@interface CTLazuliOriginalMessageID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) CTLazuliSecureGroupVersion *secureGroupVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliOriginalMessageID:(id)a0;

@end
