@class NSData, NSDictionary, NSString;

@interface NFPeerPaymentResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSData *transactionData;
@property (readonly, retain, nonatomic) NSDictionary *certificates;
@property (readonly, retain, nonatomic) NSString *transactionIdentifier;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
