@class NSView, NSString, TabGroupPickerToolbarButton, NSTextField, NSTrackingArea, NSStackView, NSPopUpButton, NSButton;

@interface CombinedSidebarTabGroupToolbarButton : NSView <NSGestureRecognizerDelegate> {
    NSStackView *_stackView;
    NSButton *_sidebarButton;
    NSPopUpButton *_newTabGroupButton;
    TabGroupPickerToolbarButton *_tabGroupPickerButton;
    NSView *_separatorForAttachedPickerButton;
    NSTextField *_privateBrowsingLabel;
    NSTrackingArea *_trackingArea;
    BOOL _needsPrivateBrowsingLabel;
}

@property (nonatomic, getter=isNewTabGroupButtonHidden) BOOL newTabGroupButtonHidden;
@property (nonatomic, getter=isTabGroupPickerButtonHidden) BOOL tabGroupPickerButtonHidden;
@property (nonatomic) BOOL tabGroupPickerButtonAttachedToSideBarButton;
@property (readonly, copy, nonatomic) NSString *tabGroupPickerButtonTitle;
@property (nonatomic, getter=isSidebarVisible) BOOL sidebarVisible;
@property (nonatomic, getter=isPrivateBrowsing) BOOL privateBrowsing;
@property (nonatomic, getter=isLocatedInSidebar) BOOL locatedInSidebar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)controlSize;
- (BOOL)allowsVibrancy;
- (void)setControlSize:(unsigned long long)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)_popUpButtonWillPopUpMenu:(id)a0;
- (void)_setTabGroupPickerSeparatorAsHiddenIfNeeded:(BOOL)a0 animated:(BOOL)a1;
- (void)_setUpButton:(id)a0;
- (void)_setupMouseTrackingAreaToHideSeparator;
- (void)_updateContentTintColors;
- (void)_updatePrivateBrowsingLabelVisiblity;
- (void)_updateSidebarButtonLabel;
- (void)_updateStackViewEdgeInsets;
- (id)initWithSidebarVisibility:(BOOL)a0 privateBrowsing:(BOOL)a1;
- (void)setNeedsPrivateBrowsingLabel:(BOOL)a0;
- (void)setNewTabGroupButtonHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setPrivateBrowsing:(BOOL)a0 needsPrivateBrowsingLabel:(BOOL)a1;
- (void)setSidebarVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setTabGroupPickerButtonHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setTabGroupPickerButtonTitle:(id)a0 subtitle:(id)a1 withIcon:(id)a2 color:(id)a3 shouldInvertColors:(BOOL)a4 titleIsProfile:(BOOL)a5;
- (id)sidebarButtonForPopover;
- (id)tabGroupPickerButtonForPopover;

@end
