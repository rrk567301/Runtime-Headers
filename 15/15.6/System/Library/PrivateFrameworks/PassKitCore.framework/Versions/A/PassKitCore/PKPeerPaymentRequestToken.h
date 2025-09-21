@class NSString, NSUUID, NSDate;

@interface PKPeerPaymentRequestToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *requestToken;
@property (readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier;
@property (readonly, copy, nonatomic) NSDate *expiryDate;

+ (id)informalRequestToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestToken:(id)a0 deviceScoreIdentifier:(id)a1;
- (id)initWithRequestToken:(id)a0 deviceScoreIdentifier:(id)a1 expiryDate:(id)a2;
- (char)isEqualToPeerPaymentRequestToken:(id)a0;
- (char)isInformalRequestToken;

@end
