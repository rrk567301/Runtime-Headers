@class NSString;

@interface CBIdentityAuthority : NSObject {
    id _reserved[2];
}

@property (readonly) struct __CSIdentityAuthority { } *CSIdentityAuthority;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)localIdentityAuthority;
+ (id)managedIdentityAuthority;
+ (id)defaultIdentityAuthority;
+ (id)identityAuthorityWithCSIdentityAuthority:(struct __CSIdentityAuthority { } *)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCSIdentityAuthority:(struct __CSIdentityAuthority { } *)a0;

@end
