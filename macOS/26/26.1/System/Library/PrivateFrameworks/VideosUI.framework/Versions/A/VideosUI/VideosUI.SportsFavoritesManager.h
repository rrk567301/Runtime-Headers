@interface VideosUI.SportsFavoritesManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ hasSyncedOnce;
    void /* unknown type, empty encoding */ teamFavoritesIds;
    void /* unknown type, empty encoding */ isDirty;
    void /* unknown type, empty encoding */ pendingContinuation;
    void /* unknown type, empty encoding */ teamFavoritesLock;
    void /* unknown type, empty encoding */ isRemovalConfirmationInProgress;
    void /* unknown type, empty encoding */ teamFavoriteIdsSubject;
}

- (void)handleAccountDidChange:(id)a0;
- (void)handleFavoriteRequestDidFinish:(id)a0;
- (void)handleSportsFavoriteSyncNotification:(id)a0;

@end
