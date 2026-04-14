@class SCRCTargetSelectorTimer;

@interface SCRSecurityAgentApplication : SCRSystemApplication {
    SCRCTargetSelectorTimer *_focusValidationCheckerTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_cancelValidationCheckerTimer;
- (void)_focusOntoValidApplicationIfNeeded;
- (void)applicationDidInitialize;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)focusValidationCheckerTimer;
- (BOOL)isPreLoginApp;
- (BOOL)isSecureApplication;
- (BOOL)isSecurityAgentApplication;

@end
