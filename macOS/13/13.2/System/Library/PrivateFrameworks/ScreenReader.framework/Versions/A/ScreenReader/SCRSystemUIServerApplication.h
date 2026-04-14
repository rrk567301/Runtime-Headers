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
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)connectToApp;
- (void)focusOut;
- (BOOL)trackMenuBarGestureEvent:(id)a0 request:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (id)menuBar;
- (id)focusedWindow;
- (id)uiMenuBar;
- (id)uiElementForPersistentSpotData:(id)a0 frontmostOnly:(BOOL)a1;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)_resetMenubarForTracking;
- (BOOL)isSystemUIServerApplication;
- (void)dispatchResetMenubarForTracking;
- (id)_menubarForTracking;
- (id)_menuExtraUIMenuBar;
- (id)_menuExtraMenuBar;
- (void)_refreshMenuExtras;
- (void)_focusOnMenuExtras;

@end
