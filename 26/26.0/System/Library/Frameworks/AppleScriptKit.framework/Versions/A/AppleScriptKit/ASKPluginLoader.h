@class NSArray, NSBundle;

@interface ASKPluginLoader : NSObject {
    NSBundle *_pluginBundle;
    NSArray *_topLevelObjects;
}

- (void)load:(id)a0;
- (void)dealloc;
- (id)initWithPluginBundle:(id)a0;

@end
