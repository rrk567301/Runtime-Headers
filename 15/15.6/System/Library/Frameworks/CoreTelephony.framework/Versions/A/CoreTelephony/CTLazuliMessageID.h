@class NSString;

@interface CTLazuliMessageID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *uuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)extractRawMessageID;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliMessageID:(id)a0;

@end
