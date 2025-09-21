@class NSString;

@interface CW8021XProfile : NSObject <NSCopying, NSCoding>

@property (copy) NSString *userDefinedName;
@property (copy) NSString *ssid;
@property (copy) NSString *username;
@property (copy) NSString *password;
@property char alwaysPromptForPassword;

+ (id)profile;
+ (id)allUser8021XProfiles;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToProfile:(id)a0;

@end
