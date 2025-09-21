@class NSMutableAttributedString, NSArray, NSView, NSString, MKPlaceSectionRowView, _MKPlaceActionButtonController, NSButton;
@protocol GEOTransitLineItem, _MKPlaceItem, MKPlaceHeaderButtonsViewControllerDelegate, _MKPlaceActionControlledButton;

@interface MKPlaceHeaderButtonsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, MKETAProviderObserver> {
    MKPlaceSectionRowView *_buttonsContainerView;
    NSArray *_constraints;
    NSButton<_MKPlaceActionControlledButton> *_primaryButton;
    NSButton<_MKPlaceActionControlledButton> *_alternatePrimaryButton;
    NSButton<_MKPlaceActionControlledButton> *_secondaryButton;
    NSMutableAttributedString *_currentETAString;
}

@property (retain, nonatomic) id<_MKPlaceItem> placeItem;
@property (retain, nonatomic) id<GEOTransitLineItem> lineItem;
@property (weak, nonatomic) id<MKPlaceHeaderButtonsViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long primaryButtonType;
@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) NSView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char resizableViewsDisabled;

- (id)init;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)viewDidLoad;
- (void)ETAProviderUpdated:(id)a0;
- (char)_canShowWhileLocked;
- (void)_contentSizeDidChange;
- (id)attributedStringWith:(id)a0;
- (id)directionAttributedStringWithETAString;
- (id)etaStringFor:(unsigned long long)a0 travelTime:(double)a1;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)primaryAttributedString;
- (void)primaryButtonSelected:(id)a0;
- (id)rerouteAttributedString;
- (void)setConstraints;
- (void)setupPrimaryButton;
- (char)shouldStackForButtons:(id)a0;
- (id)updateButton:(id)a0 withController:(id)a1;

@end
