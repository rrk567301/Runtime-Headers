@class NSString, NSData, NSURL, PKPaymentMethod;

@interface PKPaymentToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentMethod *paymentMethod;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSData *paymentData;
@property (retain, nonatomic) NSURL *redeemURL;
@property (copy, nonatomic) NSString *retryNonce;
@property (readonly, copy, nonatomic) NSString *paymentInstrumentName;
@property (readonly, copy, nonatomic) NSString *paymentNetwork;

+ (long long)version;
+ (id)paymentTokenWithProtobuf:(id)a0;
+ (id)simulatedTokenForNetwork:(id)a0;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)protobuf;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPaymentMethod:(id)a0 transactionIdentifier:(id)a1 paymentData:(id)a2;

@end
