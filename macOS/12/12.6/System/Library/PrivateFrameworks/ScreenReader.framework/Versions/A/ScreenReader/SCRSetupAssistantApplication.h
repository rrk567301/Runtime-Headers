@class SCRUIElement;

@interface SCRSetupAssistantApplication : SCRApplication {
    SCRUIElement *_titleUIElement;
    SCRUIElement *_currentUIWindow;
}

- (void).cxx_destruct;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)applicationDidInitialize;
- (void)_webAreaWasLoaded:(id)a0;
- (void)setIsFocusedEventHandler:(BOOL)a0;
- (void)_keyboardFocusDidChange:(id)a0;
- (BOOL)isPreLoginApp;
- (long long)imageMappingLevel;
- (BOOL)isSetupAssistantApplication;
- (void)_focusIfNeeded;
- (void)_setIsRegisteredForTitleDeath:(BOOL)a0;
- (void)_titleWasDestroyed:(id)a0;

@end
