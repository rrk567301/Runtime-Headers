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
- (void)setImage:(id)a0;
- (id)title;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)image;
- (void)setTitle:(id)a0;
- (BOOL)allowsVibrancy;
- (id)init;
- (double)_fontWeight;
- (void)_popUpButtonWillPopUpMenu:(id)a0;
- (void)updateTitle:(id)a0 withIcon:(id)a1 color:(id)a2 shouldInvertColors:(BOOL)a3 titleIsProfile:(BOOL)a4;

@end
