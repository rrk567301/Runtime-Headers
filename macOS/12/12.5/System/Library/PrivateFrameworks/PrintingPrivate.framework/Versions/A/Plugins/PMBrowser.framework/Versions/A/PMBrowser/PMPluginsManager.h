@class NSDictionary, NSBundle;

@interface PMPluginsManager : NSObject {
    NSBundle *_bundle;
    NSDictionary *_plugins;
}

+ (id)defaultManager;
+ (id)browserName:(Class)a0;
+ (id)browserIcon:(Class)a0;
+ (id)browserIdentifier:(Class)a0;

- (void)dealloc;
- (id)bundle;
- (id)initWithBundle:(id)a0;
- (id)plugins;
- (void)setPlugins:(id)a0;
- (id)findPluginsInPath:(id)a0;
- (id)browserWithIdentifier:(id)a0;

@end
