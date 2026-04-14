@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (id)fetchProfileFeatures;
+ (id)fetchMutableFeatures;
+ (id)_mutableITFEs;
+ (id)_profileITFEs;
+ (void)removeOrphanITFEValues:(id)a0;
+ (id)_flagGroupITFEs;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (void)resetFeatures;
+ (void)verifyOrphansForGroups:(id)a0;
+ (void)verifyOrphans;
+ (BOOL)_isITFEValueCustom:(id)a0;
+ (id)_concreteITFEs;
+ (id)_customITFEs;
+ (id)fetchCustomFeatures;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)toggle:(BOOL)a0;
- (unsigned long long)hash;
- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;

@end
