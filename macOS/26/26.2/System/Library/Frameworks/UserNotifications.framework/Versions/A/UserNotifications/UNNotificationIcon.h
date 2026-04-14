@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id _iconInfo;
    long long _iconInfoType;
    BOOL _shouldSuppressMask;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)iconAtPath:(id)a0 shouldSuppressMask:(BOOL)a1;
+ (id)iconForApplicationIdentifier:(id)a0;
+ (id)iconForSystemImageNamed:(id)a0;
+ (id)iconNamed:(id)a0;
+ (id)iconWithDateComponents:(id)a0 calendarIdentifier:(id)a1 format:(long long)a2;
+ (id)iconAtPath:(id)a0;
+ (id)iconNamed:(id)a0 shouldSuppressMask:(BOOL)a1;
+ (id)iconWithData:(id)a0;
+ (id)iconWithUTI:(id)a0;

- (id)dateComponents;
- (id)uti;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)_initWithIconInfo:(id)a0 type:(long long)a1 shouldSuppressMask:(BOOL)a2;
- (id)description;
- (id)name;
- (BOOL)shouldSuppressMask;
- (id)systemImageName;
- (id)path;
- (id)init;
- (id)data;

@end
