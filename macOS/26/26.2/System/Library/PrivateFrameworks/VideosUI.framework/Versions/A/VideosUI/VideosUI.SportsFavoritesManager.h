@interface VideosUI.SportsFavoritesManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ hasSyncedOnce;
    void /* unknown type, empty encoding */ favoriteIds;
    void /* unknown type, empty encoding */ isDirty;
    void /* unknown type, empty encoding */ pendingContinuation;
    void /* unknown type, empty encoding */ removalConfirmationContinuation;
    void /* unknown type, empty encoding */ accessLock;
    void /* unknown type, empty encoding */ favoriteIdsSubject;
}

- (void)handleAccountDidChange:(id)a0;
- (void)handleFavoriteRequestDidFinish:(id)a0;
- (void)handleSportsFavoriteSyncNotification:(id)a0;

@end
