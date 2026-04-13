@class NSLock, NSMutableDictionary, NSString, NSURL, KHDBDatabaseManager, KHSchemaVersion;

@interface KHThemeDatabase : KHDBDatabase <KHBehaviorCacheProtocol, KHTextStyleCacheProtocol> {
    NSString *_databaseName;
    NSLock *_behaviorMapLock;
    NSLock *_behaviorAttributeLock;
    NSLock *_textStyleCacheLock;
    NSMutableDictionary *_textStyleCache;
}

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) KHDBDatabaseManager *databaseManager;
@property (readonly, nonatomic) KHSchemaVersion *schemaVersion;
@property (readonly, nonatomic) NSMutableDictionary *behaviorMap;
@property (readonly, nonatomic) NSMutableDictionary *treatmentBehaviorMap;
@property (readonly, nonatomic) NSMutableDictionary *behaviorAttributeCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)usesSystemBundleCacheForTextStyles;
+ (void)setUsesSystemBundleCacheForTextStyles:(BOOL)a0;

- (void)dealloc;
- (id)initWithDatabasePath:(id)a0;
- (void)unloadBehaviorMaps;
- (void)clearBehaviorAttributeCache;
- (void)loadBehaviorMaps;
- (id)textStyleCache;
- (void)flushTextStyleCache;
- (BOOL)openDatabaseWithOptions:(unsigned int)a0;

@end
