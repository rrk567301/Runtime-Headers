@interface UNNotificationMuteAssertion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (char)isActiveForThreadIdentifier:(id)a0 currentDate:(id)a1;

@end
