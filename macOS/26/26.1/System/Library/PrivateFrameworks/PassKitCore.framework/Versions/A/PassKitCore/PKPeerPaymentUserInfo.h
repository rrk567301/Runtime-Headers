@class NSDate, PKPeerPaymentAddress;

@interface PKPeerPaymentUserInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKPeerPaymentAddress *billingAddress;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (nonatomic) double proactiveFetchPeriod;

+ (id)userInfoFromContact:(id)a0;

- (id)contact;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isOutOfDate;

@end
