@class NSString;

@interface NFCardMigrationPaymentInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *appletIdentifier;
@property (nonatomic) unsigned char merchantCapabilities;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSString *countryCode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
