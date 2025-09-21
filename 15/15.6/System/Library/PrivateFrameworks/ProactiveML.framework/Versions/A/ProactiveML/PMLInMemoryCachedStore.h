@class PMLTrainingStoredSessionBatch;

@interface PMLInMemoryCachedStore : PMLTrainingStore {
    PMLTrainingStoredSessionBatch *_cachedSessions;
}

+ (id)cachedStoreFromRealStore:(id)a0 sessionDescriptor:(id)a1 sessionsLimit:(unsigned long long)a2;

- (void).cxx_destruct;
- (void)_openDbIfUnlocked;
- (void)_registerUnlockHandler;
- (id)initWithSessionBatch:(id)a0;
- (void)loadSessionsForModel:(id)a0 excludeItemIdsUsedWithin:(double)a1 limit:(unsigned long long)a2 onlyAppleInternal:(char)a3 positiveLabel:(unsigned long long)a4 skew:(double)a5 block:(id /* block */)a6;

@end
