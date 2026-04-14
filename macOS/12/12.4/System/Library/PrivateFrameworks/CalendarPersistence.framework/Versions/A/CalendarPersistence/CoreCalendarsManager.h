@class NSMutableDictionary;

@interface CoreCalendarsManager : NSObject {
    NSMutableDictionary *_knownSources;
}

+ (id)defaultManager;
+ (BOOL)defaultManagerInitialized;
+ (void)_resetForUnitTests;

- (id)init;
- (void).cxx_destruct;
- (id)sources;
- (void)unregisterSource:(id)a0;
- (void)unregisterAllSources;
- (id)sourceForKey:(id)a0;
- (void)registerSource:(id)a0;
- (void)unregisterSourceForKey:(id)a0;

@end
