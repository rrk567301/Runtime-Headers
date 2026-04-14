@class NSDictionary;

@interface UNNotificationThreadsMuteAssertion : UNNotificationMuteAssertion {
    NSDictionary *_expirationDateByThreadID;
}

+ (BOOL)supportsSecureCoding;
+ (id)threadsMuteAssertionWithExpirationDateByThreadID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isActiveForThreadIdentifier:(id)a0 currentDate:(id)a1;
- (id)initWithExpirationDateByThreadID:(id)a0;

@end
