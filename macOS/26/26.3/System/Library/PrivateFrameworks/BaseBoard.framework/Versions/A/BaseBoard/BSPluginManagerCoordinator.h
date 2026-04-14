@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;

- (id)mainPluginManager;
- (void)registerPluginsFromBundle:(id)a0;
- (void).cxx_destruct;
- (void)registerPlugins;
- (id)pluginManagerForBundle:(id)a0;

@end
