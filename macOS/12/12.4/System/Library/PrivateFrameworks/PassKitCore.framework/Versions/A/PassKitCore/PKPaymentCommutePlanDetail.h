@class NSString, NSDate;

@interface PKPaymentCommutePlanDetail : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSDate *lastUpdateDate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (nonatomic) unsigned long long planType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 value:(long long)a1 title:(id)a2 description:(id)a3;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 expiryDate:(id)a2 title:(id)a3 description:(id)a4;

@end
