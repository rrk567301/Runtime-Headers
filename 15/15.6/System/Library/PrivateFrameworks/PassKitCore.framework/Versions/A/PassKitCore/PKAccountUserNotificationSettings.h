@class NSDecimalNumber;

@interface PKAccountUserNotificationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char transactionNotificationsEnabled;
@property (retain, nonatomic) NSDecimalNumber *transactionNotificationThreshold;
@property (retain, nonatomic) NSDecimalNumber *monthlySpendNotificationThreshold;

+ (id)defaultNotificationSettings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isEqualToAccountUserNotificationSettings:(id)a0;
- (id)initWithAccountUserNotificationSettings:(id)a0;

@end
