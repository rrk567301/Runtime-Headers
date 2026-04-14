@class MOSandboxExtension, NSObject;

@interface MOEffectiveSettingsStore : MOSettingsStore <MOSettingsReader>

@property (retain, nonatomic) MOSandboxExtension *sandboxExtension;
@property (retain, nonatomic) NSObject *sandboxExtensionLock;

+ (void)subscribeForChangesInGroups:(id)a0 eventName:(id)a1;
+ (id)publisherForGroups:(id)a0;
+ (id)collectDiagnosticsWithOutError:(id *)a0;
+ (id)new;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)startObservingChangesWithHandler:(id /* block */)a0;

- (void)fetchSandboxExtensionIfNecessary;
- (id)persistableValueForSettingKey:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)persistableValueForSetting:(id)a0 inGroup:(id)a1;
- (id)init;

@end
