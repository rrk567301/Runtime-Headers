@class MOSandboxExtension, NSObject;

@interface MOEffectiveSettingsStore : MOSettingsStore <MOSettingsReader>

@property (retain, nonatomic) MOSandboxExtension *sandboxExtension;
@property (retain, nonatomic) NSObject *sandboxExtensionLock;

+ (id)new;
+ (id)setOfActiveRestrictionUUIDs;
+ (id)publisherForGroups:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)reader;
- (void)fetchSandboxExtensionIfNecessary;
- (id)valueForSetting:(id)a0 inGroup:(id)a1;

@end
