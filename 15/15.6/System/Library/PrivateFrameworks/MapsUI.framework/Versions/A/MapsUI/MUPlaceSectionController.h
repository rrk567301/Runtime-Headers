@class NSView, MUPlaceSectionHeaderViewModel, NSArray, GEOAPPlaceCardModule, MKMapItem, MUPlaceSectionFooterViewModel, MUPlaceCallToActionAppearance, NSString, NSViewController, GEORevealedPlaceCardModule, MUImpressionElement;
@protocol MUPlaceSectionControllerDelegate, MUPersonalizedSuggestionSectionArbiterDelegate, MUInfoCardAnalyticsDelegate;

@interface MUPlaceSectionController : NSObject <MUPlaceSectionControlling>

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MUPlaceSectionControllerDelegate> delegate;
@property (weak, nonatomic) id<MUPersonalizedSuggestionSectionArbiterDelegate> personalizedSuggestionsArbiterDelegate;
@property (readonly, nonatomic) int analyticsModuleType;
@property (readonly, nonatomic) MUImpressionElement *impressionElement;
@property (readonly, nonatomic) char isImpressionable;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } impressionsFrame;
@property (readonly, nonatomic) GEORevealedPlaceCardModule *revealedAnalyticsModule;
@property (readonly, nonatomic) GEOAPPlaceCardModule *analyticsModule;
@property (readonly, nonatomic) char hasContent;
@property (readonly, nonatomic) NSView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property (nonatomic, getter=isActive) char active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) NSViewController *sectionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)draggableContent;
- (id)_placeCardImpressionsMetadata;
- (void)_populateAnalyticsModule:(id)a0;
- (void)_populateRevealedAnalyticsModule:(id)a0;
- (void)captureInfoCardAction:(int)a0 eventValue:(id)a1;
- (void)captureInfoCardAction:(int)a0 eventValue:(id)a1 feedbackType:(int)a2;
- (void)captureInfoCardAction:(int)a0 eventValue:(id)a1 feedbackType:(int)a2 actionRichProviderId:(id)a3;
- (void)captureInfoCardAction:(int)a0 target:(int)a1 eventValue:(id)a2;
- (void)captureInfoCardPartnerAction:(int)a0 eventValue:(id)a1 sharedStateButtonList:(id)a2;
- (void)captureInfoCardPartnerAction:(int)a0 target:(int)a1 eventValue:(id)a2 sharedStateButtonList:(id)a3;

@end
