@class NSString, SafariWebBookmarkList, NSArray, NSSet, TouchIconCache;

@interface CombinedFavoritesController : NSObject {
    NSSet *_canonicalURLsOfAllFavorites;
    TouchIconCache *_touchIconCache;
}

@property (copy, nonatomic) NSString *UUIDOfRootBookmarkList;
@property (retain, nonatomic) SafariWebBookmarkList *rootBookmarkListForFavorites;
@property (readonly, nonatomic) NSArray *frequentlyVisitedSites;

- (void).cxx_destruct;
- (BOOL)_refreshFrequentlyVisitedSitesIfNecessary:(id)a0 updateCacheIfChanged:(BOOL)a1;
- (void)_bookmarksWereChanged:(id)a0;
- (void)_bookmarksWereCleanedUp:(id)a0;
- (void)_bookmarksWereReloaded:(id)a0;
- (void)_collectCanonicalURLsOfAllFavoritesWithCompletionHandler:(id /* block */)a0;
- (void)_favoritesContentsChanged;
- (void)_favoritesContentsChangedWithModifiedBookmark:(id)a0;
- (void)_frequentlyVisitedSitesDidChange:(id)a0;
- (BOOL)_loadFrequentlyVisitedSitesFromCache;
- (BOOL)_refreshFrequentlyVisitedSitesIfNecessary;
- (void)_titleOfFrequentlyVisitedSiteDidChange:(id)a0;
- (void)_touchIconsCacheWillPurge:(id)a0;
- (id)bookmarkForUUID:(id)a0;
- (id)initWithTouchIconCache:(id)a0;

@end
