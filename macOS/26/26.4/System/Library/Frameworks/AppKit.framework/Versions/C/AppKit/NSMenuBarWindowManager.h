@class NSMutableDictionary, NSMenuBarDisplayWindow;

@interface NSMenuBarWindowManager : NSObject {
    NSMutableDictionary *_windowsByDisplay;
    int _displaySeed;
    BOOL _isMenuBarHiddenOnSecondaryDisplay;
    NSMenuBarDisplayWindow *_mainWindow;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)_reactToDisplayChanges;

@end
