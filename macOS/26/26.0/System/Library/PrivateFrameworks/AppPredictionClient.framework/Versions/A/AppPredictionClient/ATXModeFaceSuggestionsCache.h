@interface ATXModeFaceSuggestionsCache : NSObject

- (void)cacheSuggestedFaces:(id)a0 forModeUUID:(id)a1;
- (id)_suggestedFacesDirectoryURL;
- (id)_cacheForUUID:(id)a0;
- (void)evictCachedSuggestedFaces;
- (id)cachedSuggestedFacesForModeUUID:(id)a0;

@end
