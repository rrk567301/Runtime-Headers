@class NSMutableDictionary, NSMenuBarDisplayWindow;

@interface NSMenuBarWindowManager : NSObject {
    NSMutableDictionary *_windowsByDisplay;
    int _displaySeed;
    char _isMenuBarHiddenOnSecondaryDisplay;
    NSMenuBarDisplayWindow *_mainWindow;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)_reactToDisplayChanges;

@end
