@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_Windows : SMSystem_Daemon_Network

@property BOOL sizingIsCancelled;
@property BOOL hasSystemProfile;
@property (retain, nonatomic) NSArray *allUsers;
@property (retain, nonatomic) NSDictionary *versionDictionary;
@property (retain) NSObject<OS_dispatch_queue> *systemProfileQueue;
@property (retain) NSMutableDictionary *componentDictionary;
@property (retain) NSString *driveLetter;
@property (retain, nonatomic) NSArray *components;

+ (id)modelIcon;

- (void).cxx_destruct;
- (id)systemVersion;
- (id)productVersion;
- (id)componentForIdentifier:(id)a0;
- (unsigned long long)systemType;
- (id)copier;
- (BOOL)shouldSwitchToAccessPoint;
- (void)sizeOfComponent:(id)a0 callbackBlock:(id /* block */)a1;
- (id)volumeIcon;
- (id)createFileManager;
- (BOOL)isDefaultEffaceable;
- (void)evaluateServerType;
- (void)cancelSizing;
- (void)prepareIncompatibleApplicationsList;
- (id)initWithSession:(id)a0 name:(id)a1 txtRecord:(id)a2;
- (void)updateSystemProfile;
- (void)addComponentsToDictionary:(id)a0;
- (BOOL)connectSession;
- (void)sizeComponent:(id)a0 callbackBlock:(id /* block */)a1;
- (id)sizeForComponentWithIdentifier:(id)a0;
- (void)dumpRemoteLog;
- (Class)networkProxyClass;
- (BOOL)disallowsIPV6;
- (id)filesystemEnumerator;
- (void)sourceConnectionChanged;
- (void)sizeAllUsersIncludingVaultUsers:(BOOL)a0 callbackBlock:(id /* block */)a1;
- (id)sizeForComponentsWithIdentifiers:(id)a0;
- (id)componentWithName:(id)a0 forUser:(id)a1;

@end
