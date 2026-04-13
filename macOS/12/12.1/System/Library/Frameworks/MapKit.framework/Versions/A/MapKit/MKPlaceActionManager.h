@class NSString, MKPlaceCardActionItem, TUCallProvider;

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol> {
    MKPlaceCardActionItem *_favoriteActionItem;
    MKPlaceCardActionItem *_homeActionItem;
    MKPlaceCardActionItem *_collectionActionItem;
    MKPlaceCardActionItem *_callActionItem;
    MKPlaceCardActionItem *_websiteActionItem;
    MKPlaceCardActionItem *_brandStoreActionItem;
    TUCallProvider *_callProvider;
}

@property (readonly, nonatomic) MKPlaceCardActionItem *homeActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *favoriteActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *reportAProblemFooterAction;
@property (readonly, nonatomic) MKPlaceCardActionItem *reportAProblemAddPlaceFooterAction;
@property (readonly, nonatomic) MKPlaceCardActionItem *removeMarkerItem;
@property (nonatomic) BOOL placeInBookmarks;
@property (nonatomic) BOOL placeInCollections;
@property (nonatomic) BOOL placeInShortcuts;
@property (nonatomic) BOOL showContactActions;
@property (nonatomic) BOOL isCurrentLocation;
@property (weak, nonatomic) id placeCardDelegate;
@property (weak, nonatomic) id transitCardDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)openURL:(id)a0;
- (unsigned long long)options;
- (id)contact;
- (id)mapItem;
- (id)placeItem;
- (id)createFooterActions;
- (BOOL)_showReportAProblem;
- (id)createRowActionsWithStyle:(unsigned long long)a0;
- (void)performAction:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_launchMaps;
- (void)_canMakeCalls:(id /* block */)a0;
- (id)transitDelegate;
- (id)transitLineItem;
- (BOOL)_canShowReportAProblem;
- (BOOL)_isCurrentLocationOrDroppedPin;
- (BOOL)_showWebsite;
- (id)websiteGlyphName;
- (void)_enableStoreAction;
- (BOOL)_showReportAProblemFooterAction;
- (void)_addInternalOnlyActions:(id)a0;
- (BOOL)_showMapItemIdentifier;
- (id)addToHomeItem;
- (id)favoriteItemForFooter;
- (void)addLayoutInfoIfNeeded:(id)a0;
- (BOOL)_showAddPlaceFooterAction;
- (BOOL)_showCollectionItem;
- (BOOL)_showHomeShortcutItem;
- (id)collectionItemForFooter:(BOOL)a0;
- (id)shortPlacecardFooterActions;

@end
