@class NSMenuBarDisplays, NSMenuBarFrameWindow;

@interface NSMenuBarWindows : NSObject {
    struct __CFDictionary { } *fWindowsByDisplay;
    int fDisplaySeed;
    NSMenuBarDisplays *fDisplays;
    unsigned char fMenuBarHiddenOnSecondaryDisplay;
}

@property (retain, nonatomic) NSMenuBarFrameWindow *mainWindow;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)_createWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDisplay:(unsigned int)a1 withImpl:(id)a2;
- (id)_createWindowForDisplay:(unsigned int)a0 withImpl:(id)a1;
- (BOOL)_isMenuBarHiddenOnSecondaryDisplay;
- (id)_lookupWindowForDisplay:(unsigned int)a0;
- (void)_orderWindowFrontInAppKitOnly:(id)a0;
- (void)_reactToDisplayChanges:(unsigned long long)a0;
- (void)displayChanged:(unsigned int)a0 withSeed:(unsigned int)a1;
- (void)forEachDisplayWindowDo:(id /* block */)a0;
- (id)getWindowOnDisplay:(unsigned int)a0 createIfNecessary:(BOOL)a1 withImpl:(id)a2;
- (BOOL)isMenuBarWindow:(id)a0;
- (BOOL)isRevealedMenuBarHiddenOnDisplay:(unsigned int)a0;
- (BOOL)windowExists;

@end
