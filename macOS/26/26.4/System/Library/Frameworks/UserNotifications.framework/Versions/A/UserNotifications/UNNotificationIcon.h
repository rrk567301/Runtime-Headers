@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id _iconInfo;
    long long _iconInfoType;
    BOOL _shouldSuppressMask;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)iconAtPath:(id)a0 shouldSuppressMask:(BOOL)a1;
+ (id)iconWithData:(id)a0;
+ (id)iconWithUTI:(id)a0;
+ (id)iconNamed:(id)a0 shouldSuppressMask:(BOOL)a1;
+ (id)iconAtPath:(id)a0;
+ (id)iconForApplicationURL:(id)a0;
+ (id)iconForSystemImageNamed:(id)a0;
+ (id)iconForApplicationIdentifier:(id)a0;
+ (id)iconWithDateComponents:(id)a0 calendarIdentifier:(id)a1 format:(long long)a2;
+ (id)iconNamed:(id)a0;

- (id)applicationURL;
- (id)dateComponents;
- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)uti;
- (id)path;
- (id)systemImageName;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)data;
- (id)_initWithIconInfo:(id)a0 type:(long long)a1 shouldSuppressMask:(BOOL)a2;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)applicationIdentifier;
- (BOOL)shouldSuppressMask;

@end
