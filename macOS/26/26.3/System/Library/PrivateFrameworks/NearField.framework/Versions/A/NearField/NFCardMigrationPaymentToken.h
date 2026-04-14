@class NSData;

@interface NFCardMigrationPaymentToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *token;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSData *certificate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
