@class MKPlaceHeaderButtonsViewController, NSString, MKPlaceActionManager, GEOAutomobileOptions, MKETAProvider, MKPlaceCardHeaderViewController, MKPlaceCardActionItem, GEOTransitOptions, MKPlaceCardActionsViewController, NSNumber, GEOCyclingOptions;
@protocol GEOTransitLineItem, MKTransitLineItemViewControllerDelegate;

@interface MKTransitLineItemViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKETAProviderDelegate, MKPlaceHeaderButtonsViewControllerDelegate, _MKInfoCardController, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate> {
    MKPlaceCardHeaderViewController *_headerViewController;
    MKPlaceHeaderButtonsViewController *_buttonsHeaderController;
    MKETAProvider *_etaProvider;
    MKPlaceActionManager *_actionManager;
    MKPlaceCardActionsViewController *_actionsViewController;
}

@property (retain, nonatomic) NSNumber *favorited;
@property (retain, nonatomic) MKPlaceCardActionItem *addToFavoritesItem;
@property (retain, nonatomic) MKPlaceCardActionItem *removeFromFavoritesItem;
@property (readonly, nonatomic) id<GEOTransitLineItem> transitLineItem;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (weak, nonatomic) id<MKTransitLineItemViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setLoading:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 feedbackDelegateSelector:(int)a3;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 moduleMetadata:(id)a3 feedbackDelegateSelector:(int)a4;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 moduleMetadata:(id)a5 feedbackDelegateSelector:(int)a6;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)a0 resultIndex:(long long)a1 targetID:(unsigned long long)a2 transitSystem:(id)a3 transitDepartureSequence:(id)a4 transitCardCategory:(int)a5 transitIncident:(id)a6 feedbackDelegateSelector:(int)a7;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateViewControllers;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 feedbackDelegateSelector:(int)a5;
- (double)stackingViewController:(id)a0 heightForSeparatorBetweenUpperViewController:(id)a1 andLowerViewController:(id)a2;
- (void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)a0;
- (int)mapTypeForETAProvider:(id)a0;
- (void)placeHeaderButtonsViewController:(id)a0 didSelectPrimaryType:(unsigned long long)a1 withView:(id)a2;
- (void)placeActionManager:(id)a0 didSelectShareFromView:(id)a1;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)a0 fromView:(id)a1 isQuickAction:(BOOL)a2;
- (void)placeCardActionControllerDidSelectAddToFavorites:(id)a0;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)a0;
- (id)initWithTransitLineItem:(id)a0;
- (void)setTransitLineItem:(id)a0;
- (void)setTransitLineItem:(id)a0 loading:(BOOL)a1;
- (void)resetNearestStation;
- (double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)a0;
- (BOOL)placeCardHeaderViewControllerShouldOverrideCallToAction:(id)a0;

@end
