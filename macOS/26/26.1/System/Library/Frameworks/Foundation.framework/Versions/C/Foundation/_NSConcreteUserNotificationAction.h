@class NSString;

@interface _NSConcreteUserNotificationAction : NSUserNotificationAction <NSSecureCoding> {
    NSString *_title;
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_setIdentifier:(id)a0;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)title;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)_setTitle:(id)a0;

@end
