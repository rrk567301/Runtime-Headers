@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface IAExtensionManager : NSObject {
    NSMutableDictionary *_plugins;
    NSMutableArray *_pluginIDs;
}

@property (readonly) NSDictionary *plugins;
@property (readonly) NSArray *pluginIDs;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)_loadPluginsFromAccountsStore;
- (BOOL)_processShouldUseSocialPlugins;

@end
