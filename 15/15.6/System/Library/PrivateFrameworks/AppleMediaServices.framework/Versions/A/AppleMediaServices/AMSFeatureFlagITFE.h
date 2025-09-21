@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic, getter=isReadonly) char readonly;
@property (copy, nonatomic) NSString *value;

+ (id)_flagGroupITFEs;
+ (id)_concreteITFEs;
+ (id)_customITFEs;
+ (char)_isITFEValueCustom:(id)a0;
+ (id)_mutableITFEs;
+ (id)_profileITFEs;
+ (id)_remoteGroupITFEs;
+ (id)fetchCustomFeatures;
+ (id)fetchMutableFeatures;
+ (id)fetchProfileFeatures;
+ (void)removeOrphanITFEValues:(id)a0;
+ (void)resetFeatures;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (void)verifyOrphans;
+ (void)verifyOrphansForGroups:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)toggle:(char)a0;
- (id)initWithValue:(id)a0 isEnabled:(char)a1 isMutable:(char)a2;

@end
