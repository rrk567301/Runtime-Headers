@interface ATXModeFaceSuggestionsCache : NSObject

- (id)_suggestedFacesDirectoryURL;
- (void)evictCachedSuggestedFaces;
- (void)cacheSuggestedFaces:(id)a0 forModeUUID:(id)a1;
- (id)_cacheForUUID:(id)a0;
- (id)cachedSuggestedFacesForModeUUID:(id)a0;

@end
