@interface ACDPluginLoader : ACPluginLoader

+ (id)gameCenterPluginNameFromPlugins:(id)a0 modernPluginEnabled:(BOOL)a1 fallbackPluginID:(id)a2 modernPluginID:(id)a3;
+ (id)_currentSystemVersion;
+ (id)pluginForIdentifier:(id)a0 subpath:(id)a1;
+ (id)_buildPluginCache;

@end
