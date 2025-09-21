@interface REMChangeToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compareToken:(id)a0 error:(id *)a1;

@end
