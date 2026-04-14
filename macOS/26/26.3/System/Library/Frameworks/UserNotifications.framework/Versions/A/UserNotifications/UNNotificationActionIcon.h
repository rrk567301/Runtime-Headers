@class NSString;

@interface UNNotificationActionIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *imageName;
@property (getter=isSystemIcon) BOOL systemIcon;

+ (id)iconWithTemplateImageName:(id)a0;
+ (id)_iconWithImageName:(id)a0 systemIcon:(BOOL)a1;
+ (id)iconWithSystemImageName:(id)a0;

- (id)_initWithImageName:(id)a0 systemIcon:(BOOL)a1;
- (id)description;
- (id)_description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
