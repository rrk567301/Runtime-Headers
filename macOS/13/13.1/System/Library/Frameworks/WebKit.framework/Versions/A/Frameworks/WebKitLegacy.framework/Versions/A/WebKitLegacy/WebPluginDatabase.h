@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject {
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)sharedDatabase;
+ (id)sharedDatabaseIfExists;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)a0;
+ (id)_defaultPlugInPaths;

- (void)dealloc;
- (id)init;
- (void)close;
- (void)refresh;
- (id)plugins;
- (id)pluginForMIMEType:(id)a0;
- (id)pluginForExtension:(id)a0;
- (void)setPlugInPaths:(id)a0;
- (BOOL)isMIMETypeRegistered:(id)a0;
- (void)addPluginInstanceView:(id)a0;
- (void)removePluginInstanceView:(id)a0;
- (void)removePluginInstanceViewsFor:(id)a0;
- (void)destroyAllPluginInstanceViews;
- (id)_plugInPaths;
- (void)_addPlugin:(id)a0;
- (void)_removePlugin:(id)a0;
- (id)_scanForNewPlugins;

@end
