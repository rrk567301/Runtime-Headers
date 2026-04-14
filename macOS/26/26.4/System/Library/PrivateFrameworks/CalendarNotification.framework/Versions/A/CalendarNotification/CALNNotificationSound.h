@class NSString;

@interface CALNNotificationSound : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long alertType;
@property (readonly, copy, nonatomic) NSString *alertTopic;

+ (id)soundWithAlertType:(long long)a0 alertTopic:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToSound:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithAlertType:(long long)a0 alertTopic:(id)a1;

@end
