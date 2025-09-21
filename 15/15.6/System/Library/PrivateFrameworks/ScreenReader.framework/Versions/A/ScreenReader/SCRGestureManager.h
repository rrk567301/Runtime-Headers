@class AXFDispatchQueue;

@interface SCRGestureManager : NSObject {
    struct __AXUIElement { } *_lastSeenAXMenubar;
}

@property (readonly, nonatomic) AXFDispatchQueue *_gestureManagerDispatchQueue;
@property (nonatomic) double movedOntoNothingTime;
@property (retain, nonatomic, setter=_setDelayForNothingSoundObserver:) id _delayForNothingSoundObserver;
@property (nonatomic) double nothingSoundDelay;
@property (nonatomic) struct CGPoint { double x; double y; } lastValidElementPoint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mainMenuBarBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } menuExtraMenuBarBounds;
@property (nonatomic) char trackingFirstTouch;
@property (nonatomic) char trackingMovement;
@property (nonatomic) char ignoreNextEcho;
@property (nonatomic) char onMenuExtraMenuItem;
@property (readonly, nonatomic) char menuBarBoundsNeedsUpdate;
@property (nonatomic) char movedOntoNothing;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuExtraBounds;
- (void)setDelayForNothingSoundValue:(id)a0;
- (void)setMenuBarBoundsNeedsUpdate;
- (void)updateMenuBarBounds:(id)a0;

@end
