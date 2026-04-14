@class MOSandboxExtension, NSObject;

@interface MOEffectiveSettingsStore : MOSettingsStore <MOSettingsReader>

@property (retain, nonatomic) MOSandboxExtension *sandboxExtension;
@property (retain, nonatomic) NSObject *sandboxExtensionLock;

+ (id)new;
+ (id)publisherForGroups:(id)a0;
+ (void)subscribeForChangesInGroups:(id)a0 eventName:(id)a1;
+ (id)setOfActiveRestrictionUUIDs;
+ (id)collectDiagnosticsWithOutError:(id *)a0;
+ (void)startObservingChangesWithHandler:(id /* block */)a0;

- (id)persistableValueForSetting:(id)a0 inGroup:(id)a1;
- (id)init;
- (id)persistableValueForSettingKey:(id)a0;
- (void).cxx_destruct;
- (void)fetchSandboxExtensionIfNecessary;
- (void)dealloc;

@end
