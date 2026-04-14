@class NSDate;

@interface UNNotificationSourceMuteAssertion : UNNotificationMuteAssertion {
    NSDate *_expirationDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)sourceMuteAssertionUntilDate:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithExpirationDate:(id)a0;
- (BOOL)isActiveForThreadIdentifier:(id)a0 currentDate:(id)a1;

@end
