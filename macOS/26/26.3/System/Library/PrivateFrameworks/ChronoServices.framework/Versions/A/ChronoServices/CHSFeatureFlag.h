@class NSString;

@interface CHSFeatureFlag : NSObject <NSSecureCoding> {
    char *_cDomain;
    char *_cFeatureName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *featureName;

+ (id)new;
+ (BOOL)isFeatureFlagEnabled:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 featureName:(id)a1;

@end
