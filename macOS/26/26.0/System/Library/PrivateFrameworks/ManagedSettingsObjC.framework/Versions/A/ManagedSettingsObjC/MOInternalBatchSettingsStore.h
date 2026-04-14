@class NSString, NSUUID, NSMutableDictionary, NSMutableSet, NSObject, NSXPCConnection;

@interface MOInternalBatchSettingsStore : NSObject <MOSettingsReader, MOSettingsWriter>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *container;
@property (retain, nonatomic) NSUUID *persistenceRecordIdentifier;
@property (retain, nonatomic) NSMutableDictionary *updatedSettings;
@property (retain, nonatomic) NSMutableSet *removedSettings;
@property (retain, nonatomic) NSMutableDictionary *updatedProperties;
@property (readonly, nonatomic) NSObject *settingsLock;
@property (nonatomic) BOOL fullReplacement;
@property (readonly, nonatomic) id /* block */ sensitivityChecker;
@property (readonly, nonatomic) Class connectionClass;
@property (retain, nonatomic) NSXPCConnection *currentConnection;
@property (readonly, nonatomic) NSObject *connectionLock;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

- (void)dealloc;
- (id)persistableValueForSettingKey:(id)a0;
- (void)commitChanges;
- (id)persistableValueForSetting:(id)a0 inGroup:(id)a1;
- (void).cxx_destruct;
- (id)getCurrentSettings;
- (void)clearCurrentConnectionAndInvalidate:(BOOL)a0;
- (void)clearAllSettings;
- (void)deleteStore;
- (id)getCurrentStoreProperties;
- (id)initWithName:(id)a0 sharedContainer:(id)a1 sensitivityChecker:(id /* block */)a2 connectionClass:(Class)a3;
- (void)removePersistableValueForSetting:(id)a0 inGroup:(id)a1;
- (void)removePersistableValueForSettingKey:(id)a0;
- (void)setPersistableValue:(id)a0 forSetting:(id)a1 inGroup:(id)a2;
- (void)setPersistableValue:(id)a0 forSettingKey:(id)a1;
- (id)settingsReader;
- (id)settingsWriter;

@end
