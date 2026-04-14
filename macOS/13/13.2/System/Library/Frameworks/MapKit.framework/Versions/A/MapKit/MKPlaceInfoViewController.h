@class NSString, MKPlaceSectionRowView, MKMapItem, NSMutableArray;
@protocol _MKPlaceItem, MKPlaceActionManagerProtocol;

@interface MKPlaceInfoViewController : MKPlaceSectionViewController <NSGestureRecognizerDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {
    NSMutableArray *_rows;
    MKPlaceSectionRowView *_selectedRow;
}

@property (retain, nonatomic) id<_MKPlaceItem> placeItem;
@property (nonatomic) BOOL bottomHairlineHidden;
@property (readonly, nonatomic) BOOL hasContent;
@property (nonatomic) unsigned long long placecardOptions;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MKPlaceActionManagerProtocol> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)contact;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (BOOL)_canShowWhileLocked;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (id)initWithPlaceItem:(id)a0;
- (BOOL)shouldShowDetails;
- (unsigned long long)actionTypeFromRowType:(unsigned long long)a0;
- (void)_updateViewsAnimated:(BOOL)a0;
- (void)_addContactRow:(id)a0 ofType:(unsigned long long)a1 toViews:(id)a2 defaultTitle:(id)a3;
- (id)_addRowForType:(unsigned long long)a0 withValue:(id)a1 toViews:(id)a2;
- (id)_createViewForInfoRow:(unsigned long long)a0;
- (void)_configureRow:(id)a0 ofType:(unsigned long long)a1 withValue:(id)a2;
- (void)_shareAddress:(id)a0 fromView:(id)a1;
- (void)_launchMapsDirectionsWithSource:(id)a0 destination:(id)a1 directionsMode:(id)a2;

@end
