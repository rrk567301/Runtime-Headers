@class NSMenuItem, NSString, NSView, NSTextField, NSTrackingArea, NSStackView, NSPopUpButton, NSImage, NSButton;

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
    char _needsPrivateBrowsingLabel;
}

@property (nonatomic, getter=isNewTabGroupButtonHidden) char newTabGroupButtonHidden;
@property (nonatomic, getter=isTabGroupPickerButtonHidden) char tabGroupPickerButtonHidden;
@property (nonatomic) char tabGroupPickerButtonAttachedToSideBarButton;
@property (readonly, copy, nonatomic) NSString *tabGroupPickerButtonTitle;
@property (nonatomic, getter=isSidebarVisible) char sidebarVisible;
@property (nonatomic, getter=isPrivateBrowsing) char privateBrowsing;
@property (nonatomic, getter=isLocatedInSidebar) char locatedInSidebar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setControlSize:(unsigned long long)a0;
- (char)allowsVibrancy;
- (unsigned long long)controlSize;
- (void)menuNeedsUpdate:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)_popUpButtonWillPopUpMenu:(id)a0;
- (void)_setTabGroupPickerSeparatorAsHiddenIfNeeded:(char)a0 animated:(char)a1;
- (void)_setUpButton:(id)a0;
- (void)_setupMouseTrackingAreaToHideSeparator;
- (void)_updateContentTintColors;
- (void)_updatePrivateBrowsingLabelVisiblity;
- (void)_updateSidebarButtonLabel;
- (id)initWithSidebarVisibility:(char)a0 privateBrowsing:(char)a1;
- (void)setNeedsPrivateBrowsingLabel:(char)a0;
- (void)setNewTabGroupButtonHidden:(char)a0 animated:(char)a1;
- (void)setPrivateBrowsing:(char)a0 needsPrivateBrowsingLabel:(char)a1;
- (void)setSidebarVisible:(char)a0 animated:(char)a1;
- (void)setTabGroupPickerButtonHidden:(char)a0 animated:(char)a1;
- (void)setTabGroupPickerButtonTitle:(id)a0 subtitle:(id)a1 withIcon:(id)a2 color:(id)a3 shouldInvertColors:(char)a4 titleIsProfile:(char)a5;
- (id)sidebarButtonForPopover;
- (id)tabGroupPickerButtonForPopover;

@end
