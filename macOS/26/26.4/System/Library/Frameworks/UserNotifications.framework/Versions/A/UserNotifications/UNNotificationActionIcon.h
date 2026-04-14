@class NSString;

@interface UNNotificationActionIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *imageName;
@property (getter=isSystemIcon) BOOL systemIcon;

+ (id)iconWithSystemImageName:(id)a0;
+ (id)_iconWithImageName:(id)a0 systemIcon:(BOOL)a1;
+ (id)iconWithTemplateImageName:(id)a0;

- (id)_description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithImageName:(id)a0 systemIcon:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
