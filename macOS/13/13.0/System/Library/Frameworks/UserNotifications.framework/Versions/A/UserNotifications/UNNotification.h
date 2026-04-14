@class NSString, NSArray, UNNotificationRequest, NSDate;

@interface UNNotification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *sourceIdentifier;
@property (readonly, copy) NSArray *intentIdentifiers;
@property (readonly, copy) NSDate *date;
@property (readonly, copy) UNNotificationRequest *request;

+ (id)notificationWithRequest:(id)a0 date:(id)a1;
+ (id)notificationWithRequest:(id)a0 date:(id)a1 sourceIdentifier:(id)a2 intentIdentifiers:(id)a3;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotificationRequest:(id)a0 date:(id)a1 sourceIdentifier:(id)a2 intentIdentifiers:(id)a3;

@end
