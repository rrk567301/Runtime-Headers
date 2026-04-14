@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (id)fetchProfileFeatures;
+ (id)fetchMutableFeatures;
+ (id)fetchCustomFeatures;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (void)resetFeatures;
+ (void)verifyOrphans;
+ (void)removeOrphanITFEValues:(id)a0;
+ (id)_flagGroupITFEs;
+ (id)_remoteGroupITFEs;
+ (id)_mutableITFEs;
+ (id)_profileITFEs;
+ (id)_customITFEs;
+ (id)_concreteITFEs;
+ (BOOL)_isITFEValueCustom:(id)a0;
+ (void)verifyOrphansForGroups:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)toggle:(BOOL)a0;
- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;

@end
