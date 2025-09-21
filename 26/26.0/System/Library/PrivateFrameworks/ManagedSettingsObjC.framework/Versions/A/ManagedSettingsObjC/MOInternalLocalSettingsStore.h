@class NSUUID, NSXPCConnection, NSString, NSObject;

@interface MOInternalLocalSettingsStore : NSObject <MOSettingsReader, MOSettingsWriter>

@property (retain, nonatomic) NSUUID *persistenceRecordIdentifier;
@property (readonly, nonatomic) id /* block */ sensitivityChecker;
@property (readonly, nonatomic) Class connectionClass;
@property (retain, nonatomic) NSXPCConnection *currentConnection;
@property (readonly, nonatomic) NSObject *connectionLock;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *container;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (void)deleteStoresWithStoreNames:(id)a0 sharedContainer:(id)a1 oneTimeConnection:(id)a2;
+ (id)storesForSharedContainer:(id)a0 oneTimeConnection:(id)a1;

- (void)dealloc;
- (id)persistableValueForSettingKey:(id)a0;
- (id)persistableValueForSetting:(id)a0 inGroup:(id)a1;
- (void).cxx_destruct;
- (void)clearCurrentConnectionAndInvalidate:(BOOL)a0;
- (void)clearAllSettings;
- (void)deleteStore;
- (id)getStoreProperties;
- (id)initWithName:(id)a0 sharedContainer:(id)a1 sensitivityChecker:(id /* block */)a2 connectionClass:(Class)a3;
- (void)removePersistableValueForSetting:(id)a0 inGroup:(id)a1;
- (void)removePersistableValueForSettingKey:(id)a0;
- (void)setPersistableValue:(id)a0 forSetting:(id)a1 inGroup:(id)a2;
- (void)setPersistableValue:(id)a0 forSettingKey:(id)a1;
- (id)settingsReader;
- (id)settingsWriter;
- (void)updateStoreProperties:(id)a0;

@end
