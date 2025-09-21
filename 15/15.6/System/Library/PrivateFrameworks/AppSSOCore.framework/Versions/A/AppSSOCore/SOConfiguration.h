@class NSArray;

@interface SOConfiguration : NSObject <NSSecureCoding> {
    NSArray *_profiles;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *profiles;
@property (readonly, nonatomic) char empty;

+ (id)stringWithHandleResult:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_matchHost:(id)a0 inCredentialProfile:(id)a1;
- (id)_profileForURLWithHostScheme:(id)a0;
- (id)_profileForURLWithRealmScheme:(id)a0;
- (id)_profileForURLWithSSOIDScheme:(id)a0;
- (id)_profileForURLWithStandardScheme:(id)a0 isCredential:(char)a1;
- (id)initWithProfiles:(id)a0;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (id)realms;
- (char)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (long long)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2 profile:(id *)a3;

@end
