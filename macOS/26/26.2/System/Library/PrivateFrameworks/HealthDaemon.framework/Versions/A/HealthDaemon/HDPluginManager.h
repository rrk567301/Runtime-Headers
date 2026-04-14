@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {
    NSArray *_plugins;
}

@property (readonly, copy, nonatomic) NSArray *notificationInstructionCriteriaClasses;
@property (weak, nonatomic) HDDaemon *daemon;
@property (copy, nonatomic) NSArray *allowablePluginDirectoryPaths;

- (void)notifyPluginsOfDatabaseObliteration;
- (id)_pluginClasses;
- (id)_builtInPluginClasses;
- (id)createExtensionsForProfile:(id)a0;
- (void).cxx_destruct;
- (id)createExtensionsForDaemon:(id)a0;
- (id)_pluginDirectoryPaths;
- (id)pluginsConformingToProtocol:(id)a0;
- (id)initWithDaemon:(id)a0;
- (id)_createPluginsFromClasses:(id)a0;

@end
