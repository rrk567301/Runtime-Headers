@class NSString;

@interface CW8021XProfile : NSObject <NSCopying, NSCoding>

@property (copy) NSString *userDefinedName;
@property (copy) NSString *ssid;
@property (copy) NSString *username;
@property (copy) NSString *password;
@property BOOL alwaysPromptForPassword;

+ (id)profile;
+ (id)allUser8021XProfiles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToProfile:(id)a0;

@end
