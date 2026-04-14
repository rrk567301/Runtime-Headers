@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (void)verifyOrphans;
+ (id)_mutableITFEs;
+ (id)fetchMutableFeatures;
+ (id)_customITFEs;
+ (BOOL)_isITFEValueCustom:(id)a0;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (id)_concreteITFEs;
+ (id)_profileITFEs;
+ (void)resetFeatures;
+ (id)fetchProfileFeatures;
+ (void)removeOrphanITFEValues:(id)a0;
+ (id)_remoteGroupITFEs;
+ (void)verifyOrphansForGroups:(id)a0;
+ (id)_flagGroupITFEs;
+ (id)fetchCustomFeatures;

- (void)toggle:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
