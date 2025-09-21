@class NSArray, NSObject;
@protocol OS_dispatch_queue, AASetupAssistantDelegateService;

@interface AALoginPluginManager : NSObject {
    NSArray *_allowedPluginBundleIDs;
    NSArray *_plugins;
    char _shouldStashLoginResponse;
    NSObject<OS_dispatch_queue> *_pluginNotificationQueue;
    id<AASetupAssistantDelegateService> _idsPlugin;
}

@property (nonatomic) char shouldSkipiTunesPlugin;
@property (nonatomic) char shouldStashLoginResponse;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_loadPluginsLimitedToBundleIDs:(id)a0;
- (char)_notifyServicesOfLoginResponse:(id)a0 forAppleID:(id)a1 password:(id)a2 rawPassword:(id)a3;
- (id)_createLoginContextForAppleID:(id)a0 rawPassword:(id)a1 loginResponse:(id)a2;
- (id)_idsPlugin;
- (id)_plugins;
- (id)collectParametersForIdentityEstablishmentRequest;
- (id)collectParametersForLoginRequest;
- (void)notifyServicesOfLoginResponse:(id)a0 forAppleID:(id)a1 password:(id)a2 completion:(id /* block */)a3;
- (void)notifyServicesOfLoginResponse:(id)a0 forAppleID:(id)a1 password:(id)a2 rawPassword:(id)a3 completion:(id /* block */)a4;
- (void)restrictToPluginBundleIDs:(id)a0;
- (void)unstashLoginResponse;

@end
