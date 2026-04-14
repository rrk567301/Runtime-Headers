@class NSDictionary, NSMutableDictionary;

@interface IAPluginManager : NSObject {
    NSMutableDictionary *_plugins;
    NSMutableDictionary *_cachedDisplayNames;
    NSMutableDictionary *_cachedImagePaths;
    NSDictionary *_identifierToPathMapping;
    BOOL _allLoaded;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)allPlugins;
- (id)_alistPluginIDs;
- (id)_dataPluginIDs;
- (BOOL)pluginWithIdentifierIsInstalled:(id)a0;
- (id)_createPluginFromBundle:(id)a0;
- (id)createIAPluginAtPath:(id)a0;
- (BOOL)_pathIsChinaPlugin:(id)a0;
- (BOOL)_locIsChina;
- (void)_loadPluginAtPath:(id)a0 identifiers:(id)a1;
- (BOOL)_fastLoad:(id)a0;
- (void)_loadPlugins:(id)a0;
- (void)loadPlugins:(id)a0;
- (id)providerOfType:(id)a0;
- (id)allDataPlugins;
- (id)allAListPlugins;
- (id)pluginWithIdentifier:(id)a0;
- (id)setupPluginsForService:(id)a0;
- (id)cachedDisplayNameForApp:(id)a0;
- (void)setCachedDisplayName:(id)a0 forApp:(id)a1;
- (id)cachedImagePathForApp:(id)a0;
- (void)setCachedImagePath:(id)a0 forApp:(id)a1;
- (id)applicationWithBundleID:(id)a0;
- (id)mailApp;
- (id)notesApp;
- (id)iCalApp;
- (id)remindersApp;
- (id)iChatApp;
- (id)iPhotoApp;
- (id)addressBookApp;
- (id)applicationsForService:(id)a0;
- (id)applicationsForServices:(id)a0;
- (id)applicationsForServices:(id)a0 outServices:(id *)a1;
- (id)dataPluginsSupportingServices:(id)a0;
- (id)aListPluginsSupportingServices:(id)a0;
- (id)appBundleIDForPluginID:(id)a0;
- (id)pluginIDForAppBundleID:(id)a0;
- (id)pluginIDForProviderID:(id)a0;
- (id)providerIDForPluginID:(id)a0;
- (id)acTypeForPluginID:(id)a0;
- (id)pluginIDForACType:(id)a0;
- (id)pluginIDForDomain:(id)a0;
- (id)servicesForDomain:(id)a0;

@end
