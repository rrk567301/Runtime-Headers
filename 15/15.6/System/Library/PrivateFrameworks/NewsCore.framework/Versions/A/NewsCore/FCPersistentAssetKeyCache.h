@class NSCountedSet, NSString, NSMutableDictionary, NFUnfairLock;

@interface FCPersistentAssetKeyCache : NSObject <FCAssetKeyCacheType, FCCacheFlushing, FCAppActivityObserving> {
    char _flushingEnabled;
    char _needsSave;
    NSString *_cachePath;
    NSMutableDictionary *_cacheEntries;
    NFUnfairLock *_cacheEntriesLock;
    NSCountedSet *_interestedKeys;
    NFUnfairLock *_interestLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)interestTokenForWrappingKeyIDs:(id)a0;
- (void)activityObservingApplicationDidEnterBackground;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (void)removeAllWrappingKeys;
- (void)setWrappingKey:(id)a0 forWrappingKeyID:(id)a1;
- (id)wrappingKeyForWrappingKeyID:(id)a0;

@end
