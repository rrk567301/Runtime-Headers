@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id _iconInfo;
    long long _iconInfoType;
    BOOL _shouldSuppressMask;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)iconWithUTI:(id)a0;
+ (id)iconNamed:(id)a0;
+ (id)iconWithDateComponents:(id)a0 calendarIdentifier:(id)a1 format:(long long)a2;
+ (id)iconAtPath:(id)a0 shouldSuppressMask:(BOOL)a1;
+ (id)iconAtPath:(id)a0;
+ (id)iconForApplicationIdentifier:(id)a0;
+ (id)iconForSystemImageNamed:(id)a0;
+ (id)iconNamed:(id)a0 shouldSuppressMask:(BOOL)a1;
+ (id)iconWithData:(id)a0;

- (id)dateComponents;
- (id)uti;
- (id)applicationIdentifier;
- (BOOL)shouldSuppressMask;
- (unsigned long long)hash;
- (id)path;
- (id)systemImageName;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_initWithIconInfo:(id)a0 type:(long long)a1 shouldSuppressMask:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
