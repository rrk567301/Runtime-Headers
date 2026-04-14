@interface ACDPluginLoader : ACPluginLoader

+ (id)_buildPluginCache;
+ (id)pluginForIdentifier:(id)a0 subpath:(id)a1;
+ (id)_currentSystemVersion;
+ (id)gameCenterPluginNameFromPlugins:(id)a0 modernPluginEnabled:(BOOL)a1 fallbackPluginID:(id)a2 modernPluginID:(id)a3;

@end
