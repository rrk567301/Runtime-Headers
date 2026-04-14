@class NSArray, MKPlaceCardActionsRowView, MKPlaceActionManager, NSString, MKPlaceSectionItemView;
@protocol _MKPlaceViewControllerDelegate;

@interface MKPlaceCardActionsRowViewController : _MKUIViewController <MKModuleViewControllerProtocol> {
    MKPlaceSectionItemView *_hairlineView;
}

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) MKPlaceActionManager *actionManager;
@property (weak, nonatomic) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;
@property (readonly, nonatomic) NSArray *actionButtons;
@property (readonly, nonatomic) MKPlaceCardActionsRowView *actionsRowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLayout;
- (id)initWithStyle:(unsigned long long)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)infoCardThemeChanged;
- (BOOL)_canShowWhileLocked;
- (void)updateActionsRowView;

@end
