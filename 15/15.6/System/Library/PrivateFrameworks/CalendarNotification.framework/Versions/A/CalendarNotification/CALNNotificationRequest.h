@class NSString, CALNNotificationContent;

@interface CALNNotificationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) CALNNotificationContent *content;

+ (id)requestWithIdentifier:(id)a0 content:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 content:(id)a1;
- (char)isEqualToRequest:(id)a0;

@end
