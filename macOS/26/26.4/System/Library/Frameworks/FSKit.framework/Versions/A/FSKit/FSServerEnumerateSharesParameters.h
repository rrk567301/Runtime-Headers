@class NSDictionary;

@interface FSServerEnumerateSharesParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *authenticationInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
