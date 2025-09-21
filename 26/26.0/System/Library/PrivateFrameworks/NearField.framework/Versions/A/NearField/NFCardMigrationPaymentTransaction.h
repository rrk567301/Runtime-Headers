@class NSString, NSData;

@interface NFCardMigrationPaymentTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *appletIdentifier;
@property (readonly, nonatomic) NSData *payload;

- (void)setPayload:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setAppletIdentifier:(id)a0;

@end
