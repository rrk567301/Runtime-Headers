@class NSString, NSView, NSAppearance, NSMenu, NSFont, NSWindow;

@interface NSPopUpMenuContext : NSObject

@property (weak, nonatomic) NSWindow *keyWindow;
@property (weak, nonatomic) NSWindow *ownerWindow;
@property (weak, nonatomic) NSView *ownerView;
@property (retain, nonatomic) NSMenu *menu;
@property (retain, nonatomic) NSFont *font;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSAppearance *appearance;
@property (nonatomic) unsigned long long privateFlags;
@property (nonatomic) struct CGPoint { double x; double y; } cocoaScreenPoint;
@property (nonatomic) double minWidth;
@property (copy, nonatomic) id /* block */ checkedItemIndexProvider;
@property (nonatomic) unsigned int additionalCarbonFlags;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popupButtonBounds;
@property (nonatomic) struct CGSize { double width; double height; } popupButtonLabelOffset;
@property (nonatomic) unsigned long long popupButtonSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positioningRect;
@property (nonatomic) unsigned long long preferredEdge;
@property (nonatomic) struct Point { short v; short h; } carbonScreenPoint;
@property (nonatomic) BOOL reenableCursorRects;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exclusionRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } confinementRect;
@property (nonatomic) BOOL useConfinementRect;
@property (nonatomic) unsigned int directDisplayID;
@property (nonatomic) BOOL clearStartingRequestor;
@property (nonatomic) BOOL addedOpenEvents;
@property (nonatomic) BOOL addedCloseEvents;
@property (nonatomic) BOOL menuCanceled;
@property (nonatomic) BOOL menuOpened;
@property (nonatomic) BOOL displayingMenu;
@property (retain, nonatomic) NSString *runLoopMode;

- (void).cxx_destruct;
- (long long)checkedItemIndex;

@end
