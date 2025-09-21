@class NSString;

@interface _NSConcreteUserNotificationAction : NSUserNotificationAction <NSSecureCoding> {
    NSString *_title;
    NSString *_identifier;
}

@property (class, readonly) char supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)_setIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (void)_setTitle:(id)a0;
- (id)title;

@end
