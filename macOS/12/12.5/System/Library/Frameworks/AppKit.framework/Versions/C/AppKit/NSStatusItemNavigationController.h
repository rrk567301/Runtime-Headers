@class NSStatusItem;

@interface NSStatusItemNavigationController : NSObject {
    NSStatusItem *_statusItem;
    struct { unsigned int theftID; id eventMonitorToken; } _keyThief;
    struct { unsigned char navigationByKeyboard : 1; unsigned char navigationByRollover : 1; unsigned char navigationMenuRevealed : 1; unsigned char keyThiefActive : 1; unsigned int reserved : 28; } _flags;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithStatusItem:(id)a0;
- (void)_cleanupKeyThief;
- (void)navigateLeft;
- (void)navigateRight;
- (void)endNavigation;
- (BOOL)isNavigating;
- (void)navigationChangedWithOptions:(unsigned int)a0;
- (BOOL)_trackKeyboardNavigation;
- (unsigned int)navigationOptions;
- (void)handleCtrlF8;
- (void)menuKeyNavigateLeft;
- (void)menuKeyNavigateRight;

@end
