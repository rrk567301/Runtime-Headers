@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (id)fetchMutableFeatures;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (id)_profileITFEs;
+ (id)_mutableITFEs;
+ (void)verifyOrphans;
+ (void)removeOrphanITFEValues:(id)a0;
+ (void)verifyOrphansForGroups:(id)a0;
+ (BOOL)_isITFEValueCustom:(id)a0;
+ (id)_concreteITFEs;
+ (void)resetFeatures;
+ (id)_remoteGroupITFEs;
+ (id)_customITFEs;
+ (id)_flagGroupITFEs;
+ (id)fetchProfileFeatures;
+ (id)fetchCustomFeatures;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;
- (void).cxx_destruct;
- (void)toggle:(BOOL)a0;

@end
