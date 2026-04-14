@class NSString;

@interface _NSConcreteUserNotificationAction : NSUserNotificationAction <NSSecureCoding> {
    NSString *_title;
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)identifier;
- (id)description;
- (id)init;
- (void)_setIdentifier:(id)a0;
- (id)title;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setTitle:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
