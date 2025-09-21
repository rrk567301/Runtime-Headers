@class NSMapTable;

@interface _FEFocusEnvironmentPreferenceCache : NSObject

@property (readonly, nonatomic) NSMapTable *environmentsMap;

- (id)init;
- (void).cxx_destruct;
- (id)deepestPrimaryPreferredEnvironmentForEnvironment:(id)a0;
- (id)preferredEnvironmentsForEnvironment:(id)a0 isFinal:(char *)a1;
- (void)setPreferredEnvironments:(id)a0 forEnvironment:(id)a1;
- (void)setResolvedPreference:(id)a0 forEnvironment:(id)a1;

@end
