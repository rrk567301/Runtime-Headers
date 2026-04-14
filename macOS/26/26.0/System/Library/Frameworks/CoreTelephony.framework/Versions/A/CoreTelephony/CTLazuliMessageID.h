@class NSString, CTLazuliSecureGroupVersion, CTLazuliOriginalMessageID;

@interface CTLazuliMessageID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) CTLazuliSecureGroupVersion *secureGroupVersion;
@property (copy, nonatomic) CTLazuliOriginalMessageID *originalId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)extractRawMessageID;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageID:(id)a0;

@end
