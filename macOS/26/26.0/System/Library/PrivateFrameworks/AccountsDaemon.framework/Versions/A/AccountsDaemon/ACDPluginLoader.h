@interface ACDPluginLoader : ACPluginLoader

+ (id)_buildPluginCache;
+ (id)_currentSystemVersion;
+ (id)pluginForIdentifier:(id)a0 subpath:(id)a1;
+ (id)gameCenterPluginNameFromPlugins:(id)a0 modernPluginEnabled:(BOOL)a1 fallbackPluginID:(id)a2 modernPluginID:(id)a3;

@end
