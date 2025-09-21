@class PXTilingController, NSString, PXWidgetBar, NSHashTable, PXWidgetCompositionSpec, PXScrollViewController;
@protocol PXWidgetCompositionElementDelegate, PXWidget;

@interface PXWidgetCompositionElement : NSObject <PXWidgetBarDelegate, PXWidgetDelegate> {
    struct { char respondsToTransitionToViewControllerPreferredTransitionType; char respondsToRequestViewControllerDismissalAnimated; char respondsToPresentationEnvironment; } _delegateFlags;
    char _isPerformingChanges;
}

@property (readonly, nonatomic) NSHashTable *_observers;
@property (readonly, nonatomic) PXWidgetBar *_header;
@property (readonly, nonatomic) PXWidgetBar *_footer;
@property (nonatomic, setter=_setNotifyingWidget:) char _isNotifyingWidget;
@property (nonatomic) char _isClassOfViewElement;
@property (readonly, nonatomic) id<PXWidget> widget;
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id<PXWidgetCompositionElementDelegate> delegate;
@property (retain, nonatomic) PXWidgetCompositionSpec *spec;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) PXTilingController *headerTilingController;
@property (readonly, nonatomic) PXTilingController *footerTilingController;
@property (nonatomic) struct CGSize { double width; double height; } widgetContentSize;
@property (nonatomic) char shouldLoadWidgetContent;
@property (readonly, nonatomic) PXTilingController *animationOptionsOriginatingTilingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementWithWidget:(id)a0 scrollViewController:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)prepare;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)_updateFooter;
- (long long)widgetDefaultContentViewAnchoringTypeForDisclosureHeightChange:(id)a0;
- (char)_isViewElementAndCheckingInTile;
- (void)_invalidateFooter;
- (void)_invalidateHeader;
- (void)_notifyWidgetUsingBlock:(id /* block */)a0;
- (void)_performChanges:(id /* block */)a0 withAnimationOptions:(id)a1;
- (void)_performContentChangeWhenSafe:(id /* block */)a0;
- (void)_updateHeader;
- (id)initWithWidget:(id)a0 scrollViewController:(id)a1;
- (id)presentationEnvironmentForWidget:(id)a0;
- (void)saveAnchoring;
- (void)widget:(id)a0 animateChanges:(id /* block */)a1 withAnimationOptions:(id)a2;
- (char)widget:(id)a0 requestViewControllerDismissalAnimated:(char)a1;
- (char)widget:(id)a0 transitionToViewController:(id)a1 withTransitionType:(long long)a2;
- (void)widgetBarDidSelectDisclosureAffordance:(id)a0;
- (void)widgetBarDidSelectSubtitle:(id)a0;
- (id)widgetExtendedTraitCollection:(id)a0;
- (void)widgetHasLoadedContentDataDidChange:(id)a0;
- (void)widgetInvalidateContentLayoutStyle:(id)a0;
- (void)widgetInvalidateContentViewAnchoringType:(id)a0;
- (void)widgetLocalizedCaptionDidChange:(id)a0;
- (void)widgetLocalizedDisclosureTitleDidChange:(id)a0;
- (void)widgetLocalizedSubtitleDidChange:(id)a0;
- (void)widgetLocalizedTitleDidChange:(id)a0;
- (void)widgetPreferredContentHeightForWidthDidChange:(id)a0;
- (void)widgetRequestFocus:(id)a0;
- (id)widgetScrollViewControllerHostingWidget:(id)a0;
- (id)widgetUndoManager:(id)a0;
- (id)widgetViewControllerHostingWidget:(id)a0;
- (id)widgetViewHostingGestureRecognizers:(id)a0;

@end
