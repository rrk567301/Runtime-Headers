@class NSString;

@interface CW8021XProfile : NSObject <NSCopying, NSCoding>

@property (copy) NSString *userDefinedName;
@property (copy) NSString *ssid;
@property (copy) NSString *username;
@property (copy) NSString *password;
@property BOOL alwaysPromptForPassword;

+ (id)profile;
+ (id)allUser8021XProfiles;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqualToProfile:(id)a0;

@end
