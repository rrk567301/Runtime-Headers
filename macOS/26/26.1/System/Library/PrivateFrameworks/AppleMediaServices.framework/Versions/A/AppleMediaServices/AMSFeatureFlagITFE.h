@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (id)_mutableITFEs;
+ (id)_profileITFEs;
+ (id)fetchCustomFeatures;
+ (id)fetchProfileFeatures;
+ (id)_flagGroupITFEs;
+ (void)verifyOrphans;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (id)_remoteGroupITFEs;
+ (id)_concreteITFEs;
+ (id)fetchMutableFeatures;
+ (void)verifyOrphansForGroups:(id)a0;
+ (id)_customITFEs;
+ (void)resetFeatures;
+ (void)removeOrphanITFEValues:(id)a0;
+ (BOOL)_isITFEValueCustom:(id)a0;

- (unsigned long long)hash;
- (void)toggle:(BOOL)a0;
- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
