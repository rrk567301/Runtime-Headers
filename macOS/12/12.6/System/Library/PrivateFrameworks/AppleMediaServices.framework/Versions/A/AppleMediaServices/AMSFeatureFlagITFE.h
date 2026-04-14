@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (id)fetchMutableFeatures;
+ (id)fetchProfileFeatures;
+ (void)verifyOrphans;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (id)_customITFEs;
+ (BOOL)_isITFEValueCustom:(id)a0;
+ (id)fetchCustomFeatures;
+ (id)_mutableITFEs;
+ (id)_remoteGroupITFEs;
+ (id)_flagGroupITFEs;
+ (void)removeOrphanITFEValues:(id)a0;
+ (id)_concreteITFEs;
+ (void)resetFeatures;
+ (id)_profileITFEs;
+ (void)verifyOrphansForGroups:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)toggle:(BOOL)a0;
- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;

@end
