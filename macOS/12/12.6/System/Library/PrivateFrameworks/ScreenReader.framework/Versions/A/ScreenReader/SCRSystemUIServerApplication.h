@class NSArray, SCRElement, SCRUIElement;

@interface SCRSystemUIServerApplication : SCRSystemApplication {
    NSArray *_menuExtras;
    SCRElement *_menubarForTracking;
    SCRUIElement *_ncMenubar;
}

+ (BOOL)openFauxMenuExtraItem:(id)a0;

- (void).cxx_destruct;
- (void)setChildren:(id)a0;
- (id)menuExtras;
- (id)focusedWindow;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)connectToApp;
- (void)focusOut;
- (void)addItemDescriptionToRequest:(id)a0;
- (id)menuBar;
- (id)uiMenuBar;
- (BOOL)isSystemUIServerApplication;
- (BOOL)trackMenuBarGestureEvent:(id)a0 request:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (id)uiElementForPersistentSpotData:(id)a0 frontmostOnly:(BOOL)a1;
- (void)dispatchResetMenubarForTracking;
- (id)_menuExtraUIMenuBar;
- (void)_refreshMenuExtras;
- (id)_menuExtraMenuBar;
- (id)_menubarForTracking;
- (void)_focusOnMenuExtras;
- (void)_resetMenubarForTracking;

@end
