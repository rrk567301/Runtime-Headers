@class NSData, NSURL, NSError;

@interface PKAMPCardRegistrationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *cardData;
@property (retain, nonatomic) NSURL *brokerURL;
@property (retain, nonatomic) NSURL *paymentServicesURL;
@property (retain, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCardData:(id)a0 brokerURL:(id)a1 paymentServicesURL:(id)a2 error:(id)a3;

@end
