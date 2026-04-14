@class MOSandboxExtension, NSObject;

@interface MOEffectiveSettingsStore : MOSettingsStore <MOSettingsReader>

@property (retain, nonatomic) MOSandboxExtension *sandboxExtension;
@property (retain, nonatomic) NSObject *sandboxExtensionLock;

+ (id)new;
+ (void)subscribeForChangesInGroups:(id)a0 eventName:(id)a1;
+ (void)startObservingChangesWithHandler:(id /* block */)a0;
+ (id)publisherForGroups:(id)a0;
+ (id)setOfActiveRestrictionUUIDs;
+ (id)collectDiagnosticsWithOutError:(id *)a0;

- (id)persistableValueForSettingKey:(id)a0;
- (void).cxx_destruct;
- (id)persistableValueForSetting:(id)a0 inGroup:(id)a1;
- (id)init;
- (void)fetchSandboxExtensionIfNecessary;
- (void)dealloc;

@end
