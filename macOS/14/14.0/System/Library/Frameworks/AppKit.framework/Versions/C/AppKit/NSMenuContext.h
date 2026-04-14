@class NSView, NSString, NSMenu, NSFont, NSAppearance, NSMutableArray, NSWindow, NSEvent;

@interface NSMenuContext : NSObject

@property (weak) NSWindow *keyWindow;
@property (weak) NSWindow *ownerWindow;
@property (weak) NSView *ownerView;
@property (weak) NSMenu *menu;
@property (retain) NSEvent *event;
@property (retain) NSFont *savedFont;
@property unsigned long long flags;
@property (retain) NSAppearance *appearance;
@property unsigned long long privateFlags;
@property struct CGPoint { double x; double y; } frameAlignmentPoint;
@property double minWidth;
@property long long checkedItemIndex;
@property unsigned int positioningOptions;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popupButtonBounds;
@property struct CGSize { double width; double height; } popupButtonLabelOffset;
@property unsigned long long popupButtonSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positioningRect;
@property unsigned long long preferredEdge;
@property BOOL reenableCursorRects;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exclusionRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } confinementRect;
@property BOOL useConfinementRect;
@property unsigned int directDisplayID;
@property BOOL clearStartingRequestor;
@property BOOL menuCanceled;
@property BOOL menuOpened;
@property BOOL displayingMenu;
@property (retain) NSString *runLoopMode;
@property (retain) NSMutableArray *pluginMenus;

- (void).cxx_destruct;
- (void)recordPluginMenu:(id)a0;
- (void)removePluginsFromMenus;

@end
