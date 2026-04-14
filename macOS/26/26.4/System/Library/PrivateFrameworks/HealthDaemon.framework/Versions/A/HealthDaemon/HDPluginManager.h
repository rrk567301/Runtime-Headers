@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {
    NSArray *_plugins;
}

@property (readonly, copy, nonatomic) NSArray *notificationInstructionCriteriaClasses;
@property (weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic) NSArray *allowablePluginDirectoryPaths;
@property (readonly, nonatomic) NSArray *loadedPlugins;

- (id)initWithDaemon:(id)a0;
- (id)createExtensionsForProfile:(id)a0;
- (void).cxx_destruct;
- (id)_builtInPluginClasses;
- (id)pluginsConformingToProtocol:(id)a0;
- (id)_pluginDirectoryPaths;
- (id)_createPluginsFromClasses:(id)a0;
- (id)_pluginClasses;
- (id)createExtensionsForDaemon:(id)a0;
- (void)notifyPluginsOfDatabaseObliteration;

@end
