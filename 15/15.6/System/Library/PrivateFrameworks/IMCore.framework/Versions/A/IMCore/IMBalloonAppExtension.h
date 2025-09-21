@class NSUUID, LSPlugInKitProxy, NSExtension, NSNumber;
@protocol PKPlugIn;

@interface IMBalloonAppExtension : IMBalloonPlugin

@property (retain, nonatomic) LSPlugInKitProxy *proxy;
@property (retain) NSUUID *requestIdentifier;
@property (nonatomic) char canSendDataPayloads;
@property (readonly, retain, nonatomic) NSExtension *extension;
@property (readonly, retain, nonatomic) NSNumber *itemID;
@property (readonly, retain, nonatomic) id<PKPlugIn> plugin;
@property (readonly, nonatomic) char shouldBalloonHideAppIcon;
@property (readonly, nonatomic) char isLaunchProhibited;

- (void).cxx_destruct;
- (id)version;
- (id)adamID;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)_initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (char)isBetaPlugin;
- (char)shouldBreadcrumbHideAppIcon;

@end
