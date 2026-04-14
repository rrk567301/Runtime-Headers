@class NSTextField, NSMenu, NSMenuItem, NSSearchField, NSBannerView, NSStackView, NSLayoutConstraint, NSButton, NSSegmentedControl;
@protocol NSFindPatternField;

@interface NSTextFinderBarView : NSView {
    id _finder;
    id _container;
    NSBannerView *_bannerView;
    NSSearchField<NSFindPatternField> *_searchField;
    NSTextField<NSFindPatternField> *_replaceField;
    NSButton *_doneButton;
    NSButton *_replaceCheckbox;
    NSSegmentedControl *_forwardBackButtons;
    NSSegmentedControl *_replaceAllButtons;
    NSMenu *_replaceAllMenu;
    NSMenuItem *_ignoreCaseItem;
    NSMenuItem *_wrapAroundItem;
    NSMenuItem *_containsItem;
    NSMenuItem *_startsWithItem;
    NSMenuItem *_fullWordItem;
    NSMenuItem *_patternItem;
    NSMenuItem *_patternItemSeparator;
    NSLayoutConstraint *_collapseConstraint;
    NSStackView *_findRowStackView;
    NSStackView *_replaceRowStackView;
    BOOL _replaceMode;
    BOOL _useRegularControls;
    BOOL _drawsBackground;
}

- (void)dealloc;
- (id)_container;
- (void)viewDidMoveToWindow;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (id)_contentView;
- (void)_updateSubviews;
- (void)viewDidMoveToSuperview;
- (void)_finishedMakingConnections;
- (id)_searchField;
- (void)viewWillMoveToWindow:(id)a0;
- (void)performTextFinderAction:(id)a0;
- (id)_replaceField;
- (id)_textFinder;
- (unsigned long long)_dividerPosition;
- (BOOL)_contiguousWithTitlebar;
- (void)_updateNextKeyViews;
- (id)_actionResponderFromView:(id)a0;
- (id)_nextKeyView;
- (double)_requiredHeight;
- (void)_resizeIfNecessary;
- (void)_layoutBarSubviews;
- (void)_updateReplaceUIVisibility;
- (void)_setReplaceMode:(BOOL)a0;
- (void)_toggleFindReplace:(id)a0;
- (void)_doneButton:(id)a0;
- (void)_setTextFinder:(id)a0;
- (void)_setSearchOptions:(unsigned long long)a0;
- (unsigned long long)_searchOptions;
- (void)_setSubstringMatchType:(long long)a0;
- (long long)_substringMatchType;
- (void)_setEnabledForward:(BOOL)a0 back:(BOOL)a1;
- (void)_insertFindPattern:(id)a0;

@end
