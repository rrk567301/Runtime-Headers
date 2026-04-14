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

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithDomain:(id)a0 featureName:(id)a1;

@end
