@class NSString, NSDecimalNumber, NSDate;

@interface PKPeerPaymentRecipient : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long statusReason;
@property (nonatomic) unsigned long long receiveMethod;
@property (copy, nonatomic) NSString *receiveCurrency;
@property (copy, nonatomic) NSDecimalNumber *minimumReceiveAmount;
@property (copy, nonatomic) NSDecimalNumber *maximumReceiveAmount;
@property (nonatomic) char allowsFormalPaymentRequests;
@property (copy, nonatomic) NSDate *cacheUntil;
@property (copy, nonatomic) NSString *phoneOrEmail;
@property (copy, nonatomic) NSString *displayName;

+ (id)recipientWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)cacheableCopy;

@end
