@class RTAuthorizedLocationConfirmationStatusEnumerationOptions;

@interface RTAuthorizedLocationConfirmationStatusEnumerationContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTAuthorizedLocationConfirmationStatusEnumerationOptions *options;
@property (readonly, nonatomic) unsigned long long offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEnumerationOptions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnumerationOptions:(id)a0 offset:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToContext:(id)a0;

@end
