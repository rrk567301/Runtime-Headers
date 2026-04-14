@class NSString, NSImage, NSLayoutConstraint, NSMenuItem;

@interface TabGroupPickerToolbarButton : NSPopUpButton <NSMenuDelegate> {
    NSMenuItem *_tabGroupPickerItem;
    NSString *_tabGroupPickerTitle;
    NSImage *_arrowImage;
    NSImage *_arrowImageForDarkMode;
    NSLayoutConstraint *_maximumWidthConstraint;
}

@property (readonly, nonatomic) BOOL sidebarVisible;
@property (readonly, nonatomic) BOOL privateBrowsing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)menuNeedsUpdate:(id)a0;
- (id)accessibilityLabel;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (void)setImage:(id)a0;
- (id)init;
- (id)image;
- (id)title;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)_popUpButtonWillPopUpMenu:(id)a0;
- (void)updateTitle:(id)a0 subtitle:(id)a1 withIcon:(id)a2 color:(id)a3 shouldInvertColors:(BOOL)a4 titleIsProfile:(BOOL)a5;

@end
