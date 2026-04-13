@class NSMutableDictionary;

@interface CIMResourcePathManager : NSObject {
    BOOL _rebuildResourcePaths;
}

@property (nonatomic) struct __FSEventStream { } *stream;
@property (readonly, nonatomic) NSMutableDictionary *updateDictionaryPaths;

+ (id)sharedResourcePathManager;
+ (id)userDictionaryURL;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)combinedResourcePathsForKeys:(id)a0 inputMode:(id)a1;
- (void)setUpDirectoryNotificationChangesForPath:(id)a0;
- (void)additionalDictionariesUpdated;
- (void)tearDownDirectoryNotificationChangesForPath;
- (void)addUpdateDictionaryPath:(id)a0 forInputModePrefix:(id)a1;
- (void)rebuildUpdateResourcePaths:(id)a0;
- (id)resourcePathsForUpdateDictionaries:(id)a0;
- (id)resourcePathsForKey:(id)a0 inputMode:(id)a1;

@end
