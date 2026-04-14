@class SGSuggestionAction, NSView, NSArray, NSString, SGSuggestionStore, NSViewController, NSMutableArray, NSPopover;
@protocol SGBannerProtocol, SGSuggestionPresenterDelegate;

@interface SGSuggestionPresenter : NSObject <SGSuggestionDelegate> {
    NSView<SGBannerProtocol> *_banner;
    SGSuggestionAction *_bannerPrimaryAction;
    SGSuggestionAction *_bannerDismissAction;
    NSViewController *_presentedViewController;
    SGSuggestionStore *_suggestionStore;
    NSPopover *_popover;
    NSMutableArray *_filteredSuggestions;
}

@property (nonatomic) BOOL wantsToShowBanner;
@property (weak, nonatomic) id<SGSuggestionPresenterDelegate> delegate;
@property (readonly, nonatomic) NSView<SGBannerProtocol> *banner;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatList:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dismissViewController:(id)a0;
- (void)addSuggestion:(id)a0;
- (id)tableViewController;
- (id)_tableViewController;
- (void)presentViewController:(id)a0;
- (void)removeSuggestion:(id)a0;
- (void)suggestion:(id)a0 actionFinished:(BOOL)a1;
- (void)suggestionWasUpdated:(id)a0;
- (long long)suggestionsUIContext;
- (void)bannerDismissAction;
- (void)presentAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)suggestionStore;
- (void)reloadSuggestionsFromSearchableItems;
- (id)formatMixedCategoriesTitle:(id)a0;
- (void)_bannerPrimaryAction;
- (void)_listDidChangeNotification:(id)a0;
- (void)_bannerAction;
- (void)_bannerDismiss;
- (void)_removeBanner;
- (void)_filterSuggestions;
- (void)_restoreSuggestions;
- (void)_updateBanner;
- (id)formatMixedCategoriesSubtitle:(id)a0;
- (void)bannerPrimaryAction;
- (void)_presentModalViewController:(id)a0 fromSourceView:(id)a1;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (void)_dismissPresentedViewController:(id)a0;

@end
