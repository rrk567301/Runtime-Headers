@class NSArray, NSMenuItem;

@interface CWMenuItemView : NSView {
    NSMenuItem *_menuItem;
    NSArray *_images;
    char _isPopupMenuItem;
    char _menuHasCurrentNetwork;
    double _height;
}

+ (unsigned long long)idealMenuItemWidthWithTitle:(id)a0 images:(id)a1 isPopupMenuItem:(char)a2 menuHasCurrentNetwork:(char)a3;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__drawRTLRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__drawLTRRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)__flipImage:(id)a0;
- (unsigned long long)idealMenuItemWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 menuItem:(id)a1 images:(id)a2 isPopupMenuItem:(char)a3 menuHasCurrentNetwork:(char)a4 height:(double)a5;

@end
