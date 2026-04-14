@class NSString, PXCMMSuggestionViewModel, PXGadgetSpec, PXCMMSuggestionView, PXFaceTileImageCombiner;
@protocol PXGadgetDelegate, PXCMMWorkflowPresenting, PXCMMSuggestion;

@interface PXCMMSuggestionGadget : NSObject <PXCMMSuggestionViewDelegate, PXGadget> {
    BOOL _didLoadSuggestion;
    PXCMMSuggestionViewModel *_suggestionViewModel;
    PXCMMSuggestionView *_suggestionView;
    struct CGSize { double width; double height; } _requestedPosterImageSize;
    double _requestedWidth;
    BOOL _didRequestCachingOfPosterImage;
    PXFaceTileImageCombiner *_faceTileImageCombiner;
}

@property (readonly, nonatomic) id<PXCMMWorkflowPresenting> workflowPresenter;
@property (retain, nonatomic) id<PXCMMSuggestion> suggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithWorkflowPresenter:(id)a0;
- (void)suggestionViewSizeThatFitsDidChange:(id)a0;
- (void)userDidSelectGadget;
- (void)prepareCollectionViewItem:(id)a0;
- (id)uniqueGadgetIdentifier;
- (void)contentHasBeenSeen;
- (void)gadgetControllerHasAppeared;
- (void)presentDetailViewAnimated:(BOOL)a0;
- (BOOL)supportsHighlighting;
- (void)presentDetailViewForSuggestionView:(id)a0 animated:(BOOL)a1;
- (id)contextMenuForSuggestionView:(id)a0;
- (void)ppt_presentComposeRecipientViewAfterDelay:(double)a0;
- (void)_loadSuggestionIfNecessary;
- (void)_updatePeopleSuggestionFaceTileImagesForPersons:(id)a0 mutableViewModel:(id)a1;
- (void)_setCombinedFaceTileImage:(id)a0;
- (void)_presentDetailViewAnimated:(BOOL)a0 pptConfigurationBlock:(id /* block */)a1;

@end
