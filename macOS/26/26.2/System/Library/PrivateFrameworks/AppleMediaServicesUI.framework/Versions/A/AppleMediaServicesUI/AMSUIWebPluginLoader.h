@class NSMutableDictionary, NSDictionary, AMSUIWebClientContext, NSArray;

@interface AMSUIWebPluginLoader : NSObject

@property (readonly, weak) AMSUIWebClientContext *context;
@property (readonly) NSDictionary *installedPluginURLs;
@property (retain) NSMutableDictionary *loadedPluginsMap;
@property (readonly) NSArray *loadedPlugins;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)_loadInstalledPlugins;
- (id)pluginForBundleIdentifier:(id)a0;

@end
