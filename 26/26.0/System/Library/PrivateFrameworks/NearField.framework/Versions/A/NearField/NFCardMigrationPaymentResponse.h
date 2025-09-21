@class NSData, NSArray, NSDictionary;

@interface NFCardMigrationPaymentResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *token;
@property (readonly, nonatomic) NSArray *transactions;
@property (readonly, nonatomic) NSDictionary *certs;

- (void)encodeWithCoder:(id)a0;
- (void)setTransactions:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setToken:(id)a0;
- (void).cxx_destruct;
- (void)setCerts:(id)a0;

@end
