@class NSDictionary, NSString, ASCAdamID;

@interface ASCLockupRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *mediaQueryParams;
@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, nonatomic) char enableAppDistribution;
@property (readonly, copy, nonatomic) NSString *platformOverride;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *context;

+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 appVersionId:(id)a3 distributorId:(id)a4;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 clientID:(id)a3;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 clientID:(id)a3 enableAppDistribution:(char)a4;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 clientID:(id)a3 productVariantID:(id)a4 enableAppDistribution:(char)a5;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 enableAppDistribution:(char)a3;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 includeUnlistedApps:(char)a3;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 minExternalVersionID:(id)a3 latestReleaseID:(id)a4 productVariantID:(id)a5;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 platformOverride:(id)a3;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 productVariantID:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)clone;
- (id)initWithID:(id)a0 kind:(id)a1 context:(id)a2;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 clientID:(id)a3;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 appVersionId:(id)a3 distributorId:(id)a4;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 clientID:(id)a3 enableAppDistribution:(char)a4;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 clientID:(id)a3 productVariantID:(id)a4 enableAppDistribution:(char)a5;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 enableAppDistribution:(char)a3;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 includeUnlistedApps:(char)a3;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 minExternalVersionID:(id)a3 latestReleaseID:(id)a4 productVariantID:(id)a5;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 platformOverride:(id)a3;
- (id)_lockupRequestWithAppDistributionEnabled;
- (id)_lockupRequestWithClientID:(id)a0;
- (id)_lockupRequestWithPlatformOverride:(id)a0;
- (id)lockupRequestByAddingMediaQueryParams:(id)a0;
- (id)lockupRequestWithAppDistributionEnabled;
- (id)lockupRequestWithAppVersionId:(id)a0 distributorId:(id)a1;
- (id)lockupRequestWithClientID:(id)a0;
- (id)lockupRequestWithMediaQueryParams:(id)a0;
- (id)lockupRequestWithPlatformOverride:(id)a0;
- (id)lockupRequestWithUnlistedAppsIncluded;

@end
