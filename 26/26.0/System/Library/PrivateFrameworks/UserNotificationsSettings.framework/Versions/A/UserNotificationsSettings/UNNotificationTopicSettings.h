@class UNNotificationSettings, UNNotificationTopic, UNNotificationMuteAssertion;

@interface UNNotificationTopicSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) UNNotificationTopic *topic;
@property (readonly, copy) UNNotificationSettings *topicSettings;
@property (readonly, copy) UNNotificationMuteAssertion *muteAssertion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTopic:(id)a0 settings:(id)a1 muteAssertion:(id)a2;
- (id)description;
- (id)initWithTopic:(id)a0 settings:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
