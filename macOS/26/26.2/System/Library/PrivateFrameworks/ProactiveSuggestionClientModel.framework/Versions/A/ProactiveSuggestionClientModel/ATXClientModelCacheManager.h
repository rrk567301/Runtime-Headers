@class NSString, _PASLock;

@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol> {
    _PASLock *_clientModelCacheHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cacheDirectory;
- (void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)a0 clientModelId:(id)a1;
- (id)cachedSuggestionsForClientModel:(id)a0;
- (double)cacheAgeForClientModel:(id)a0;
- (void)initGuardedData;
- (void).cxx_destruct;
- (id)cacheFileHandlerForClientModel:(id)a0 guardedData:(id)a1;
- (id)cachedSuggestionsForAllClientModels;
- (void)addCacheHandlersForExistingClientModelCaches;
- (id)lastCacheUpdateDateForClientModel:(id)a0;
- (id)init;
- (void)updateCachedSuggestions:(id)a0;

@end
