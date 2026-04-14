@class NSString;

@interface UNNotificationActionIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *imageName;
@property (getter=isSystemIcon) BOOL systemIcon;

+ (id)iconWithTemplateImageName:(id)a0;
+ (id)iconWithSystemImageName:(id)a0;
+ (id)_iconWithImageName:(id)a0 systemIcon:(BOOL)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_description;
- (id)_initWithImageName:(id)a0 systemIcon:(BOOL)a1;

@end
