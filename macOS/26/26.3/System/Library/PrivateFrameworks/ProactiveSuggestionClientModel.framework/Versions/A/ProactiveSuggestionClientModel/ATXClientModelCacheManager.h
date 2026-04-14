@class NSString, _PASLock;

@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol> {
    _PASLock *_clientModelCacheHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)a0 clientModelId:(id)a1;
- (id)cacheFileHandlerForClientModel:(id)a0 guardedData:(id)a1;
- (id)init;
- (double)cacheAgeForClientModel:(id)a0;
- (id)cachedSuggestionsForClientModel:(id)a0;
- (void).cxx_destruct;
- (void)addCacheHandlersForExistingClientModelCaches;
- (id)lastCacheUpdateDateForClientModel:(id)a0;
- (id)cachedSuggestionsForAllClientModels;
- (void)initGuardedData;
- (id)cacheDirectory;
- (void)updateCachedSuggestions:(id)a0;

@end
