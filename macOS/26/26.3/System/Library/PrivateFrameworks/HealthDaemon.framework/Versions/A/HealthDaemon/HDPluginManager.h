@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {
    NSArray *_plugins;
}

@property (readonly, copy, nonatomic) NSArray *notificationInstructionCriteriaClasses;
@property (weak, nonatomic) HDDaemon *daemon;
@property (copy, nonatomic) NSArray *allowablePluginDirectoryPaths;

- (id)_createPluginsFromClasses:(id)a0;
- (id)createExtensionsForDaemon:(id)a0;
- (id)createExtensionsForProfile:(id)a0;
- (void)notifyPluginsOfDatabaseObliteration;
- (void).cxx_destruct;
- (id)_pluginClasses;
- (id)_builtInPluginClasses;
- (id)_pluginDirectoryPaths;
- (id)pluginsConformingToProtocol:(id)a0;
- (id)initWithDaemon:(id)a0;

@end
