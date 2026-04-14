@class UNNotificationSettings, NSArray, UNNotificationMuteAssertion;

@interface UNNotificationSourceSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) UNNotificationSettings *notificationSettings;
@property (readonly, copy) NSArray *topicSettings;
@property (readonly, copy) UNNotificationMuteAssertion *muteAssertion;
@property (readonly) BOOL isRestricted;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithNotificationSettings:(id)a0 topicSettings:(id)a1 muteAssertion:(id)a2 isRestricted:(BOOL)a3;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
