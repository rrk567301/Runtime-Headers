@class NSString;

@interface NSMenuTemplate : NSObject <NSCoding> {
    NSString *title;
    struct CGPoint { double x; double y; } location;
    id view;
    NSString *menuClassName;
    id supermenu;
    id realObject;
    id extension;
    char isWindowsMenu;
    char isRequestMenu;
    char isFontMenu;
    char interfaceStyle;
    char *cMenuClassName;
    char disabled;
    id popupCell;
}

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)supermenu;
- (void)_setTitle:(id)a0;
- (long long)numberOfItems;
- (char)_isEnabled;
- (char)_pullsDown;
- (void)_setEnabled:(char)a0;
- (void)_setMenuClassName:(id)a0;
- (void)_setOwnedByPopUp:(id)a0;
- (void)_setPullsDown:(char)a0;
- (id)itemMatrix;
- (id)menuClassName;
- (id)nibInstantiate;
- (void)setSupermenu:(id)a0;

@end
