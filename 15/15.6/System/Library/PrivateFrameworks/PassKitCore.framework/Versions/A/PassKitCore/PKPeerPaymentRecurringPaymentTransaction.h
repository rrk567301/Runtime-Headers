@class NSString, NSDate;

@interface PKPeerPaymentRecurringPaymentTransaction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSDate *executionDate;
@property (nonatomic) long long errorCode;

+ (id)transactionWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)exceedsAppleCashLimits;

@end
