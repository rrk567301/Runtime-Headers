@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject {
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)_defaultPlugInPaths;
+ (id)sharedDatabase;
+ (id)sharedDatabaseIfExists;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)a0;

- (void)dealloc;
- (id)init;
- (void)close;
- (void)refresh;
- (id)plugins;
- (void)addPluginInstanceView:(id)a0;
- (void)removePluginInstanceView:(id)a0;
- (void)setPlugInPaths:(id)a0;
- (id)pluginForMIMEType:(id)a0;
- (void)_removePlugin:(id)a0;
- (id)_scanForNewPlugins;
- (void)_addPlugin:(id)a0;
- (id)pluginForExtension:(id)a0;
- (BOOL)isMIMETypeRegistered:(id)a0;
- (void)removePluginInstanceViewsFor:(id)a0;
- (void)destroyAllPluginInstanceViews;
- (id)_plugInPaths;

@end
