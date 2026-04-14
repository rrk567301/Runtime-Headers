@class LSPlugInKitProxy, NSExtension;

@interface _IMBalloonExtensionApp : IMBalloonApp

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) LSPlugInKitProxy *proxy;

- (void).cxx_destruct;
- (id)applicationType;
- (id)version;
- (BOOL)isEnabled;
- (BOOL)isLaunchProhibited;
- (id)itemID;
- (id)plugin;
- (void)setIsEnabled:(BOOL)a0;
- (id)appStoreGenreID;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)_bundleIDsForDawnSendMenuTemporaryDisplayOverride;
- (id)appStoreGenre;
- (id)appStoreSubgenres;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2 proxy:(id)a3;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (BOOL)isBetaPlugin;
- (BOOL)isPreDawnAndAppStoreStickerGenre;
- (BOOL)isStickerPackOnly;
- (BOOL)linkedBeforeDawn;
- (BOOL)linkedBeforeSDKVersion:(id)a0;
- (BOOL)shouldForceIntoSendMenu;
- (BOOL)showInBrowser;
- (BOOL)showInSendMenu;
- (BOOL)showableInBrowser;

@end
