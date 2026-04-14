@class NSString;

@interface NSMenuBarDisplayManager : NSObject {
    NSString *_menuBarApplicationName;
    double _reservedStatusBarWidth;
    BOOL _isRegisteredForSafeApertureNotifications;
}

+ (id)shared;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_applicationNameChanged:(id)a0;
- (void)_invalidateSafeApertureOnDisplay:(unsigned int)a0;
- (void)_notifyNotchBoundsChangedOnDisplay:(unsigned int)a0;

@end
