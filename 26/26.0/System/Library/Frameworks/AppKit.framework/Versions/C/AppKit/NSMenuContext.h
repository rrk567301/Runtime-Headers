@class NSString, NSEvent, NSAppearance, NSArray, NSFont;

@interface NSMenuContext : NSObject <NSMenuContextProtocol> {
    void /* function */ runLoopMode;
    void /* function */ pluginMenus;
}

@property (nonatomic, weak) void /* function */ keyWindow;
@property (nonatomic, weak) void /* function */ ownerWindow;
@property (nonatomic, weak) void /* function */ ownerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } ownerWindowFrame;
@property (nonatomic, weak) void /* function */ menu;
@property (nonatomic, retain) NSEvent *event;
@property (nonatomic, retain) NSFont *savedFont;
@property (nonatomic, retain) NSAppearance *appearance;
@property (nonatomic, copy) NSString *runLoopMode;
@property (nonatomic, copy) NSArray *pluginMenus;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long privateFlags;
@property (nonatomic) struct CGPoint { double x0; double x1; } frameAlignmentPoint;
@property (nonatomic) double minWidth;
@property (nonatomic) long long checkedItemIndex;
@property (nonatomic) unsigned long long positioningOptions;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } popupButtonBounds;
@property (nonatomic) struct CGSize { double x0; double x1; } popupButtonLabelOffset;
@property (nonatomic) unsigned long long popupButtonSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } positioningRect;
@property (nonatomic) unsigned long long preferredEdge;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } exclusionRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } confinementRect;
@property (nonatomic) unsigned int directDisplayID;
@property (nonatomic) BOOL reenableCursorRects;
@property (nonatomic) BOOL useConfinementRect;
@property (nonatomic) BOOL clearStartingRequestor;
@property (nonatomic) BOOL menuCanceled;
@property (nonatomic) BOOL menuOpened;
@property (nonatomic) BOOL displayingMenu;

- (id)init;
- (void).cxx_destruct;
- (void)recordPluginMenu:(id)a0;
- (void)removePluginsFromMenus;

@end
