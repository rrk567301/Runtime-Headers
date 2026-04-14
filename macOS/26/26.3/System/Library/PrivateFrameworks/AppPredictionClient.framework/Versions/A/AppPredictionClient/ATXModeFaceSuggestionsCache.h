@interface ATXModeFaceSuggestionsCache : NSObject

- (id)cachedSuggestedFacesForModeUUID:(id)a0;
- (void)cacheSuggestedFaces:(id)a0 forModeUUID:(id)a1;
- (void)evictCachedSuggestedFaces;
- (id)_suggestedFacesDirectoryURL;
- (id)_cacheForUUID:(id)a0;

@end
