@class SVXAFConnectionFactory, AFConnection, AFInstanceContext, SVXSoundUtils, AFPreferences, SVXDeviceSetupContext;
@protocol SVXPerforming, SVXAFConnectionDelegate;

@interface SVXAFConnectionManager : NSObject {
    SVXAFConnectionFactory *_connectionFactory;
    id<SVXPerforming> _performer;
    AFInstanceContext *_instanceContext;
    AFPreferences *_preferences;
    SVXSoundUtils *_soundUtils;
    SVXDeviceSetupContext *_deviceSetupContext;
    AFConnection *_connection;
}

@property (weak, nonatomic) id<SVXAFConnectionDelegate> connectionDelegate;

- (void)invalidateConnection;
- (id)getConnection:(BOOL)a0;
- (void).cxx_destruct;
- (id)_createClientConfiguration:(id)a0 storeDemo:(id)a1 preferences:(id)a2;
- (id)initWithPerformer:(id)a0 instanceContext:(id)a1 preferences:(id)a2;
- (void)updateClientConfigurationWithContext:(id)a0 storeDemo:(id)a1 createIfAbsent:(BOOL)a2;

@end
