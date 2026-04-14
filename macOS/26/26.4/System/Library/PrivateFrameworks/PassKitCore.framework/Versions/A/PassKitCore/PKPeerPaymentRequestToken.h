@class NSString, NSUUID, NSDate;

@interface PKPeerPaymentRequestToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *requestToken;
@property (readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier;
@property (readonly, copy, nonatomic) NSDate *expiryDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestToken:(id)a0;
- (id)initWithRequestToken:(id)a0 deviceScoreIdentifier:(id)a1 expiryDate:(id)a2;
- (BOOL)isInformalRequestToken;

@end
