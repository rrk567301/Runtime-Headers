@class NSString, _PASLock;

@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol> {
    _PASLock *_clientModelCacheHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)a0 clientModelId:(id)a1;
- (void)updateCachedSuggestions:(id)a0;
- (id)init;
- (id)lastCacheUpdateDateForClientModel:(id)a0;
- (id)cachedSuggestionsForAllClientModels;
- (id)cachedSuggestionsForClientModel:(id)a0;
- (id)cacheDirectory;
- (id)cacheFileHandlerForClientModel:(id)a0 guardedData:(id)a1;
- (void)initGuardedData;
- (double)cacheAgeForClientModel:(id)a0;
- (void)addCacheHandlersForExistingClientModelCaches;
- (void).cxx_destruct;

@end
