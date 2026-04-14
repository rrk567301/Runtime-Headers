@class NSString;

@interface PKBankAccountInformation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *accountNumber;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *identifier;

+ (Class)_classForType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)updateToLatestKeychainData;
- (void)deleteAllBankInformation;
- (void)deleteAllLocalBankInformation;
- (void)_commonDeleteAllBankInformation;
- (id)accountSuffix;
- (id)maskedAccountNumber;

@end
