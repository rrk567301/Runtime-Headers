@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;

- (void)registerPluginsFromBundle:(id)a0;
- (id)mainPluginManager;
- (void)registerPlugins;
- (id)pluginManagerForBundle:(id)a0;
- (void).cxx_destruct;

@end
