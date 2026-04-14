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
- (id)init;
- (void)setImage:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setTitle:(id)a0;
- (id)image;
- (BOOL)allowsVibrancy;
- (double)_fontWeight;
- (void)_popUpButtonWillPopUpMenu:(id)a0;
- (void)updateTitle:(id)a0 withIcon:(id)a1 color:(id)a2 shouldInvertColors:(BOOL)a3 titleIsProfile:(BOOL)a4;

@end
