@class NSString, NSLocale;

@interface FMDActivationLockContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned long long activationLockAuthType;
@property (nonatomic) unsigned long long activationLockOperationType;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)validateContext;

@end
