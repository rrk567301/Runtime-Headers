@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (id)fetchMutableFeatures;
+ (void)verifyOrphans;
+ (id)fetchCustomFeatures;
+ (id)_customITFEs;
+ (BOOL)_isITFEValueCustom:(id)a0;
+ (id)_profileITFEs;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (id)_remoteGroupITFEs;
+ (id)fetchProfileFeatures;
+ (id)_concreteITFEs;
+ (void)resetFeatures;
+ (void)verifyOrphansForGroups:(id)a0;
+ (id)_flagGroupITFEs;
+ (id)_mutableITFEs;
+ (void)removeOrphanITFEValues:(id)a0;

- (void)toggle:(BOOL)a0;
- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
