@class NSString, PKDateComponentsRange;

@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) PKDateComponentsRange *dateComponentsRange;

+ (long long)version;
+ (id)shippingMethodWithProtobuf:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)shippingMethodProtobuf;
- (BOOL)isEqualToShippingMethod:(id)a0;

@end
