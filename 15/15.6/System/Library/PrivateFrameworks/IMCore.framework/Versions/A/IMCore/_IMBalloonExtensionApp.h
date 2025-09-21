@class LSPlugInKitProxy, NSExtension;

@interface _IMBalloonExtensionApp : IMBalloonApp

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) LSPlugInKitProxy *proxy;

- (void).cxx_destruct;
- (id)applicationType;
- (id)version;
- (char)isEnabled;
- (char)isLaunchProhibited;
- (id)itemID;
- (void)setIsEnabled:(char)a0;
- (id)plugin;
- (id)appStoreGenreID;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)_bundleIDToPresentationDelayMapping;
- (id)_bundleIDsForDawnSendMenuTemporaryDisplayOverride;
- (id)_bundleIDsForDelayedPresentationOptIn;
- (id)appStoreGenre;
- (id)appStoreSubgenres;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2 proxy:(id)a3;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (char)isBetaPlugin;
- (char)isPreDawnAndAppStoreStickerGenre;
- (char)isStickerPackOnly;
- (char)linkedBeforeDawn;
- (char)linkedBeforeSDKVersion:(id)a0;
- (double)presentationDelay;
- (char)shouldDelayViewControllerPresentation;
- (char)shouldForceIntoSendMenu;
- (char)showInBrowser;
- (char)showInSendMenu;
- (char)showableInBrowser;

@end
