@class NSString, CALNNotificationContent, NSDate;

@interface CALNNotificationRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;
@property (readonly, copy, nonatomic) CALNNotificationContent *content;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) char shouldPresentAlert;
@property (readonly, nonatomic) char hasAlertContent;
@property (readonly, nonatomic) char shouldPlaySound;
@property (readonly, nonatomic) char hasSound;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1 content:(id)a2;
- (id)initWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1 content:(id)a2 date:(id)a3 shouldPresentAlert:(char)a4 shouldPlaySound:(char)a5;
- (char)isEqualToRecord:(id)a0;

@end
