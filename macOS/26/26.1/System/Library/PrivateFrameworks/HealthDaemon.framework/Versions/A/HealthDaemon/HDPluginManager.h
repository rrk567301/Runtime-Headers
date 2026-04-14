@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {
    NSArray *_plugins;
}

@property (readonly, copy, nonatomic) NSArray *notificationInstructionCriteriaClasses;
@property (weak, nonatomic) HDDaemon *daemon;
@property (copy, nonatomic) NSArray *allowablePluginDirectoryPaths;

- (id)initWithDaemon:(id)a0;
- (id)_createPluginsFromClasses:(id)a0;
- (id)_pluginClasses;
- (void)notifyPluginsOfDatabaseObliteration;
- (id)pluginsConformingToProtocol:(id)a0;
- (void).cxx_destruct;
- (id)_builtInPluginClasses;
- (id)_pluginDirectoryPaths;
- (id)createExtensionsForDaemon:(id)a0;
- (id)createExtensionsForProfile:(id)a0;

@end
