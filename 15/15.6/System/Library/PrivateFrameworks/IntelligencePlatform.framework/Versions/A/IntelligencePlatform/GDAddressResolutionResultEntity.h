@class NSString;

@interface GDAddressResolutionResultEntity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *mdId;
@property (readonly, copy, nonatomic) NSString *contactId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMdId:(id)a0 contactId:(id)a1;
- (char)isEqualToAddressResolutionResultEntity:(id)a0;

@end
