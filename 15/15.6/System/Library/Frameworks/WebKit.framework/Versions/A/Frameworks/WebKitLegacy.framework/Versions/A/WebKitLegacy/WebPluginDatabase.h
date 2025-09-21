@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject {
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)sharedDatabase;
+ (id)_defaultPlugInPaths;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)a0;
+ (id)sharedDatabaseIfExists;

- (void)dealloc;
- (id)init;
- (void)close;
- (void)refresh;
- (void)setPlugInPaths:(id)a0;
- (void)_addPlugin:(id)a0;
- (id)plugins;
- (id)_plugInPaths;
- (void)_removePlugin:(id)a0;
- (id)_scanForNewPlugins;
- (void)addPluginInstanceView:(id)a0;
- (void)destroyAllPluginInstanceViews;
- (char)isMIMETypeRegistered:(id)a0;
- (id)pluginForExtension:(id)a0;
- (id)pluginForMIMEType:(id)a0;
- (void)removePluginInstanceView:(id)a0;
- (void)removePluginInstanceViewsFor:(id)a0;

@end
