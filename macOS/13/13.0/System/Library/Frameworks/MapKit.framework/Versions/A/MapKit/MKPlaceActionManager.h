@class NSString, MKPlaceCardActionItem, TUCallProvider;
@protocol MKPlaceActionManagerTransitDelegate, _MKInfoCardAnalyticsDelegate;

@interface MKPlaceActionManager : NSObject <MKPlaceActionItemAppearanceDataProvider, MKPlaceActionManagerProtocol> {
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
@property (readonly, nonatomic) MKPlaceCardActionItem *claimBusinessActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *flyoverActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *shareActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *messageActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *callActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *websiteActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *collectionActionItem;
@property (nonatomic) BOOL placeInBookmarks;
@property (nonatomic) BOOL placeInCollections;
@property (nonatomic) BOOL placeInShortcuts;
@property (nonatomic) BOOL showContactActions;
@property (nonatomic) BOOL isCurrentLocation;
@property (weak, nonatomic) id placeCardDelegate;
@property (weak, nonatomic) id<MKPlaceActionManagerTransitDelegate> transitCardDelegate;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
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
- (BOOL)_showReportAProblem;
- (id)createFooterActions;
- (id)placeItem;
- (void)_launchMaps;
- (void)_enableStoreAction;
- (unsigned long long)placeMUIDForAppearance:(id)a0;
- (BOOL)placeInCollectionsForAppearance:(id)a0;
- (id)createRowActionsWithStyle:(unsigned long long)a0;
- (void)performAction:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)actionItemForButtonItem:(id)a0;
- (id)transitDelegate;
- (id)transitLineItem;
- (BOOL)_showMapItemIdentifier;
- (BOOL)_canShowReportAProblem;
- (BOOL)_showReportAProblemFooterAction;
- (BOOL)_showAddPlaceFooterAction;
- (BOOL)_showWebsite;
- (BOOL)_showCollectionItem;
- (BOOL)_showHomeShortcutItem;
- (id)favoriteItemForFooter;
- (id)addToHomeItem;
- (id)createSearchAlongRouteActions;
- (void)addLayoutInfoIfNeeded:(id)a0;
- (id)createContactActions;
- (BOOL)_canClaimThisBusiness;
- (BOOL)_canShowCallAction;
- (void)_addInternalOnlyActions:(id)a0;
- (id)shortPlacecardFooterActions;
- (void)_canMakeCalls:(id /* block */)a0;
- (BOOL)_isCurrentLocationOrDroppedPin;

@end
