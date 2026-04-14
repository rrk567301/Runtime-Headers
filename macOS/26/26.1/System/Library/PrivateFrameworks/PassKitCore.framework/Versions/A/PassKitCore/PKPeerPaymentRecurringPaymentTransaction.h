@class NSString, NSDate;

@interface PKPeerPaymentRecurringPaymentTransaction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSDate *executionDate;
@property (nonatomic) long long errorCode;

+ (id)transactionWithDictionary:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)exceedsAppleCashLimits;

@end
