@class SCRUIElement;

@interface SCRSetupAssistantApplication : SCRApplication {
    SCRUIElement *_titleUIElement;
    SCRUIElement *_currentUIWindow;
}

- (void).cxx_destruct;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)_webAreaWasLoaded:(id)a0;
- (void)_keyboardFocusDidChange:(id)a0;
- (void)applicationDidInitialize;
- (void)setIsFocusedEventHandler:(BOOL)a0;
- (long long)imageMappingLevel;
- (BOOL)isPreLoginApp;
- (void)_focusIfNeeded;
- (void)_titleWasDestroyed:(id)a0;
- (BOOL)isSetupAssistantApplication;
- (void)_setIsRegisteredForTitleDeath:(BOOL)a0;

@end
