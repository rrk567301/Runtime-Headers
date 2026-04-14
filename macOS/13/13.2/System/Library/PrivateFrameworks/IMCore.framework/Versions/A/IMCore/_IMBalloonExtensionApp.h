@class LSPlugInKitProxy, NSExtension;

@interface _IMBalloonExtensionApp : IMBalloonApp

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) LSPlugInKitProxy *proxy;

- (void).cxx_destruct;
- (id)itemID;
- (id)applicationType;
- (BOOL)isLaunchProhibited;
- (BOOL)isEnabled;
- (id)version;
- (id)plugin;
- (void)setIsEnabled:(BOOL)a0;
- (BOOL)showInBrowser;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2 proxy:(id)a3;
- (BOOL)isStickerPackOnly;
- (BOOL)isBetaPlugin;
- (BOOL)showableInBrowser;

@end
