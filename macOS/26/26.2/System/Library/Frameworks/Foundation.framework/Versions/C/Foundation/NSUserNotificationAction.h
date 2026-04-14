@class NSString;

@interface NSUserNotificationAction : NSObject <NSCopying>

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *title;

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
