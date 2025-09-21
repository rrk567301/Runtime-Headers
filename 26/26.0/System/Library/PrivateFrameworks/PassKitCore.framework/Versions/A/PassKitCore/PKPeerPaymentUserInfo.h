@class NSDate, PKPeerPaymentAddress;

@interface PKPeerPaymentUserInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKPeerPaymentAddress *billingAddress;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (nonatomic) double proactiveFetchPeriod;

+ (id)userInfoFromContact:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isOutOfDate;

@end
