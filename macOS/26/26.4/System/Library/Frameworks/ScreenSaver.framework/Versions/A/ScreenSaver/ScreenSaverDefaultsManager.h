@class NSMutableDictionary;

@interface ScreenSaverDefaultsManager : NSObject {
    NSMutableDictionary *_cache;
}

+ (id)defaultsManager;

- (void)synchronize;
- (id)init;
- (void)_appWillTerminate:(id)a0;
- (id)defaultsForKey:(id)a0;
- (void)setDefaults:(id)a0 forKey:(id)a1;

@end
