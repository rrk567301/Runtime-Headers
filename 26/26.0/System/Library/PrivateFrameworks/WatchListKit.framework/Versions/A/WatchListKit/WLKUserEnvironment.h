@class NSString, NSDictionary, NSArray, NSSet, NSNumber;

@interface WLKUserEnvironment : NSObject

@property (nonatomic) unsigned long long protocolVersion;
@property (retain, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSString *storeFrontIdentifier;
@property (retain, nonatomic) NSString *languageIdentifier;
@property (retain, nonatomic) NSString *countryIdentifier;
@property (retain, nonatomic) NSDictionary *entitlements;
@property (retain, nonatomic) NSArray *consentedBrands;
@property (retain, nonatomic) NSArray *deniedBrands;
@property (nonatomic) BOOL consented;
@property (nonatomic) BOOL internalBuild;
@property (retain, nonatomic) NSString *platform;
@property (readonly, nonatomic) NSSet *tvExtensionBundleIDs;
@property (readonly, nonatomic) BOOL isRunningInTVExtension;
@property (readonly, nonatomic) BOOL isRunningInTVAppExtension;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSNumber *movieRanking;
@property (retain, nonatomic) NSNumber *tvShowRanking;
@property (retain, nonatomic) NSString *restrictions;

+ (id)currentEnvironment;
+ (void)setCurrentEnvironmentForTesting:(id)a0;

- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_consentQuery;
- (id)_entitlementsQuery;
- (id)_queryParametersV3;
- (id)_queryPostV3;
- (BOOL)isEqualToEnvironment:(id)a0;

@end
