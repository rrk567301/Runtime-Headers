@class NSData;

@interface NFCardMigrationPaymentToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *token;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSData *certificate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
