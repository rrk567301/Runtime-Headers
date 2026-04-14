@class NSMenuItem, NSString, NSMenu, NSView, NSTextField, NSStackView, NSPopUpButton, NSTrackingArea, NSImage, NSButton;

@interface CombinedSidebarTabGroupToolbarButton : NSView <NSGestureRecognizerDelegate, NSMenuDelegate> {
    NSStackView *_stackView;
    NSButton *_sidebarButton;
    NSPopUpButton *_newTabGroupButton;
    NSPopUpButton *_tabGroupPickerButton;
    NSMenuItem *_tabGroupPickerItem;
    NSImage *_arrowImage;
    NSImage *_arrowImageForDarkMode;
    NSView *_separatorForAttachedPickerButton;
    NSTextField *_privateBrowsingLabel;
    NSTrackingArea *_trackingArea;
    NSString *_tabGroupPickerTitle;
    BOOL _needsPrivateBrowsingLabel;
}

@property (nonatomic, getter=isNewTabGroupButtonHidden) BOOL newTabGroupButtonHidden;
@property (nonatomic, getter=isTabGroupPickerButtonHidden) BOOL tabGroupPickerButtonHidden;
@property (nonatomic) BOOL tabGroupPickerButtonAttachedToSideBarButton;
@property (readonly, copy, nonatomic) NSString *tabGroupPickerButtonTitle;
@property (nonatomic, getter=isSidebarVisible) BOOL sidebarVisible;
@property (nonatomic, getter=isPrivateBrowsing) BOOL privateBrowsing;
@property (nonatomic, getter=isLocatedInSidebar) BOOL locatedInSidebar;
@property (retain, nonatomic) NSMenu *tabGroupPickerMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)a0;
- (BOOL)allowsVibrancy;
- (void)viewDidChangeEffectiveAppearance;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (void)_popUpButtonWillPopUpMenu:(id)a0;
- (id)initWithSidebarVisibility:(BOOL)a0 privateBrowsing:(BOOL)a1;
- (void)_updateContentTintColors;
- (void)_setUpButton:(id)a0;
- (id)tabGroupPickerButtonForPopover;
- (id)sidebarButtonForPopover;
- (void)setNewTabGroupButtonHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setTabGroupPickerButtonHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setTabGroupPickerButtonTitle:(id)a0 withIcon:(id)a1;
- (void)_setTabGroupPickerSeparatorAsHiddenIfNeeded:(BOOL)a0 animated:(BOOL)a1;
- (void)setPrivateBrowsing:(BOOL)a0 needsPrivateBrowsingLabel:(BOOL)a1;
- (void)setNeedsPrivateBrowsingLabel:(BOOL)a0;
- (void)_updateSidebarButtonLabel;
- (void)_updatePrivateBrowsingLabelVisiblity;
- (id)_createTabGroupPickerMenu;
- (void)_setupMouseTrackingAreaToHideSeparator;

@end
