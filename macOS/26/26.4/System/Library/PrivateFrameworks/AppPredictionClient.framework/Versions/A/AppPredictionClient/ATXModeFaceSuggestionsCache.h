@interface ATXModeFaceSuggestionsCache : NSObject

- (id)cachedSuggestedFacesForModeUUID:(id)a0;
- (id)_suggestedFacesDirectoryURL;
- (void)cacheSuggestedFaces:(id)a0 forModeUUID:(id)a1;
- (id)_cacheForUUID:(id)a0;
- (void)evictCachedSuggestedFaces;

@end
