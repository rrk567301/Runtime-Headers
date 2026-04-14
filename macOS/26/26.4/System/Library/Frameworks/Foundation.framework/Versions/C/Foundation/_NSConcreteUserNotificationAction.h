@class NSString;

@interface _NSConcreteUserNotificationAction : NSUserNotificationAction <NSSecureCoding> {
    NSString *_title;
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_setTitle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)title;
- (id)init;
- (void)_setIdentifier:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (void)dealloc;

@end
