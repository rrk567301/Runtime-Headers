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
}

@property (nonatomic, getter=isNewTabGroupButtonHidden) BOOL newTabGroupButtonHidden;
@property (nonatomic, getter=isTabGroupPickerButtonHidden) BOOL tabGroupPickerButtonHidden;
@property (nonatomic) BOOL tabGroupPickerButtonAttachedToSideBarButton;
@property (nonatomic) BOOL needsPrivateBrowsingLabel;
@property (copy, nonatomic) NSString *tabGroupPickerButtonTitle;
@property (nonatomic, getter=isSidebarVisible) BOOL sidebarVisible;
@property (nonatomic, getter=isPrivateBrowsing) BOOL privateBrowsing;
@property (nonatomic, getter=isLocatedInSidebar) BOOL locatedInSidebar;
@property (retain, nonatomic) NSMenu *tabGroupPickerMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (void)setTabGroupPickerButtonHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setNewTabGroupButtonHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_setUpButton:(id)a0;
- (void)_popUpButtonWillPopUpMenu:(id)a0;
- (void)_setupMouseTrackingAreaToHideSeparator;
- (void)_updateContentTintColors;
- (void)_setTabGroupPickerSeparatorAsHiddenIfNeeded:(BOOL)a0 animated:(BOOL)a1;
- (void)_updatePrivateBrowsingLabelVisiblity;
- (id)_createTabGroupPickerMenu;
- (id)tabGroupPickerButtonForPopover;
- (id)sidebarButtonForPopover;

@end
