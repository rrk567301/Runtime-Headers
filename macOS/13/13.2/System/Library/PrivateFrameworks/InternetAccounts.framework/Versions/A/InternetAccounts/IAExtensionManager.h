@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface IAExtensionManager : NSObject {
    NSMutableDictionary *_plugins;
    NSMutableArray *_pluginIDs;
}

@property (readonly) NSDictionary *plugins;
@property (readonly) NSArray *pluginIDs;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_processShouldUseSocialPlugins;
- (void)_loadPluginsFromAccountsStore;

@end
