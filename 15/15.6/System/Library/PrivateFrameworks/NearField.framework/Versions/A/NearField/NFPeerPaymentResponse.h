@class NSData, NSDictionary, NSString;

@interface NFPeerPaymentResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSData *transactionData;
@property (readonly, retain, nonatomic) NSDictionary *certificates;
@property (readonly, retain, nonatomic) NSString *transactionIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
