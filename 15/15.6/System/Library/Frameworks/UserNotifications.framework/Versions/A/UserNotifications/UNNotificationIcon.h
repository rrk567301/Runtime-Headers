@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id _iconInfo;
    long long _iconInfoType;
    char _shouldSuppressMask;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)iconAtPath:(id)a0;
+ (id)iconForApplicationIdentifier:(id)a0;
+ (id)iconForSystemImageNamed:(id)a0;
+ (id)iconNamed:(id)a0;
+ (id)iconAtPath:(id)a0 shouldSuppressMask:(char)a1;
+ (id)iconNamed:(id)a0 shouldSuppressMask:(char)a1;
+ (id)iconWithData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)path;
- (id)applicationIdentifier;
- (id)systemImageName;
- (id)_initWithIconInfo:(id)a0 type:(long long)a1 shouldSuppressMask:(char)a2;
- (char)shouldSuppressMask;

@end
