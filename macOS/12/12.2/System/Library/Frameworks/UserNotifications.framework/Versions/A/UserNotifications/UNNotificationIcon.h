@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id _iconInfo;
    long long _iconInfoType;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)iconForSystemImageNamed:(id)a0;
+ (id)iconAtPath:(id)a0;
+ (id)iconNamed:(id)a0;
+ (id)iconForApplicationIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)path;
- (id)applicationIdentifier;
- (id)_initWithIconInfo:(id)a0 type:(long long)a1;
- (id)systemImageName;

@end
