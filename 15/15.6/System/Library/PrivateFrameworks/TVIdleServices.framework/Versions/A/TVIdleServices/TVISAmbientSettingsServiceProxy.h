@class TVISAmbientRemoteProxyHandler, NSString, NSXPCConnection;
@protocol TVISAmbientSettingsServiceDelegate;

@interface TVISAmbientSettingsServiceProxy : NSObject <TVISAmbientSettingsServiceObserverInterface, TVISAmbientSettingsServiceInterface>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) TVISAmbientRemoteProxyHandler *remoteProxyHandler;
@property (weak, nonatomic) id<TVISAmbientSettingsServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)queryAerialThemesWithReply:(id /* block */)a0;
- (void)settingsDidUpdate;
- (void)updateActiveStateForAerialThemeWithID:(id)a0 activate:(char)a1 reply:(id /* block */)a2;

@end
