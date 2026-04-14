@class SCRCTargetSelectorTimer;

@interface SCRSecurityAgentApplication : SCRSystemApplication {
    SCRCTargetSelectorTimer *_focusValidationCheckerTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)applicationDidInitialize;
- (BOOL)isSecureApplication;
- (BOOL)isPreLoginApp;
- (void)_focusOntoValidApplicationIfNeeded;
- (id)focusValidationCheckerTimer;
- (void)_cancelValidationCheckerTimer;
- (BOOL)isSecurityAgentApplication;

@end
