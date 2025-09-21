@class AXFUIElement;

@interface SCRSetupAssistantApplication : SCRApplication {
    AXFUIElement *_titleUIElement;
    AXFUIElement *_currentUIWindow;
}

- (void).cxx_destruct;
- (void)_focusIfNeeded;
- (void)_keyboardFocusDidChange:(id)a0;
- (void)_setIsRegisteredForTitleDeath:(char)a0;
- (void)_titleWasDestroyed:(id)a0;
- (void)_webAreaWasLoaded:(id)a0;
- (void)applicationDidInitialize;
- (char)focusInto:(id)a0 event:(id)a1;
- (long long)imageMappingLevel;
- (char)isPreLoginApp;
- (char)isSetupAssistantApplication;
- (void)setIsFocusedEventHandler:(char)a0;

@end
