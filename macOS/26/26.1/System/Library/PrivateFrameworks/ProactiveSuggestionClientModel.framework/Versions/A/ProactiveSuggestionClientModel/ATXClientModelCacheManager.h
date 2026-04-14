@class NSString, _PASLock;

@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol> {
    _PASLock *_clientModelCacheHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cacheDirectory;
- (void)addCacheHandlersForExistingClientModelCaches;
- (double)cacheAgeForClientModel:(id)a0;
- (void)updateCachedSuggestions:(id)a0;
- (id)cacheFileHandlerForClientModel:(id)a0 guardedData:(id)a1;
- (void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)a0 clientModelId:(id)a1;
- (void).cxx_destruct;
- (void)initGuardedData;
- (id)lastCacheUpdateDateForClientModel:(id)a0;
- (id)cachedSuggestionsForClientModel:(id)a0;
- (id)cachedSuggestionsForAllClientModels;
- (id)init;

@end
