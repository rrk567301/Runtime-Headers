@interface UNNotificationMuteAssertion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isActiveForThreadIdentifier:(id)a0 currentDate:(id)a1;

@end
