@class NSString, NSLocale;

@interface FMDActivationLockContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned long long activationLockAuthType;
@property (nonatomic) unsigned long long activationLockOperationType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)validateContext;

@end
