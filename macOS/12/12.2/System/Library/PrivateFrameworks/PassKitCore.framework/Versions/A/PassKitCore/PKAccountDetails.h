@class PKCreditAccountDetails;

@interface PKAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKCreditAccountDetails *creditDetails;
@property (readonly, nonatomic) unsigned long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)ingestExtendedAccountDetails:(id)a0;
- (id)initWithDictionary:(id)a0 type:(unsigned long long)a1;
- (id)initWithCreditDetails:(id)a0;

@end
