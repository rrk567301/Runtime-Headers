@class NSMutableDictionary, ACDDatabaseBackupActivity, ACDAuthenticationPluginLoader, ACRemoteDeviceProxy, ACDAccessPluginManager, NSMutableArray, NSString, ACDDataclassOwnersManager, NSXPCListener, ACDAuthenticationDialogManager, _TtC14AccountsDaemon35ACDAsyncAuthenticationPluginManager, ACDAuthenticationPluginManager, ACDAccountNotifier;
@protocol ACDClientProviderProtocol, ACDDatabaseProtocol;

@interface ACDServer : NSObject <ACDAccountStoreDelegate, NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
    NSMutableArray *_accountStoreClients;
    NSMutableArray *_oauthSignerClients;
    NSMutableArray *_authenticationDialogManagerClients;
    NSMutableDictionary *_clientsByConnection;
    unsigned int _clientCountMaximum;
}

@property (retain, nonatomic) ACDAuthenticationPluginLoader *authPluginLoader;
@property (retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager;
@property (retain, nonatomic) _TtC14AccountsDaemon35ACDAsyncAuthenticationPluginManager *asyncAuthenticationPluginManager;
@property (retain, nonatomic) ACDAccessPluginManager *accessPluginManager;
@property (retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager;
@property (retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager;
@property (retain, nonatomic) ACDAccountNotifier *accountNotifier;
@property (retain, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy;
@property (retain, nonatomic) id<ACDClientProviderProtocol> clientProvider;
@property (retain, nonatomic) id<ACDDatabaseProtocol> database;
@property (retain, nonatomic) ACDDatabaseBackupActivity *databaseBackupActivity;
@property (readonly, nonatomic) NSXPCListener *accountStoreListener;
@property (readonly, nonatomic) NSXPCListener *oauthSignerListener;
@property (readonly, nonatomic) NSXPCListener *authenticationDialogListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (void)start;
- (id)initWithAccountStoreListener:(id)a0 oauthSignerListener:(id)a1 authenticationDialogListener:(id)a2;
- (BOOL)_isHomePod;
- (void)credentialsDidChangeForAccount:(id)a0;
- (id)createDatabaseConnection;
- (void)_endObservingLanguageChangeNotification;
- (id)_keyForConnection:(id)a0;
- (id)_newOAuthSignerForClient:(id)a0;
- (id)_newDaemonAccountStoreFilterForClient:(id)a0;
- (void)_beginObservingIDSProxyNotifications;
- (id)createClientForConnection:(id)a0;
- (void)accountStore:(id)a0 didSaveAccount:(id)a1 changeType:(int)a2;
- (BOOL)_shouldSendDidSaveNotificationForAccount:(id)a0;
- (void)_notify_accountStore:(id)a0 didSaveAccount:(id)a1 changeType:(int)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)_handleLanguageChangedDarwinNotification;
- (void).cxx_destruct;
- (void)_beginObservingLanguageChangeNotfication;
- (id)clientForConnection:(id)a0;
- (id)init;

@end
