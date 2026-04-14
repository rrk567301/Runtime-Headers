@class NSDebugMenuUserDefaultController, NSArray, NSString;

@interface NSFocusDebuggerMenu : NSMenu <NSMenuDelegate>

@property (class, readonly, nonatomic) NSDebugMenuUserDefaultController *supportsFocusNavigationController;
@property (class, readonly, nonatomic) NSDebugMenuUserDefaultController *focusLoggingEnabledController;
@property (class, readonly, nonatomic) NSDebugMenuUserDefaultController *focusItemCachingEnabledController;
@property (class, readonly, nonatomic) NSDebugMenuUserDefaultController *focusNavigationLoopValidationEnabledController;

@property BOOL sawFirstUpdate;
@property (copy) NSArray *snapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)menuNeedsUpdate:(id)a0;
- (id)initWithTitle:(id)a0;
- (void)_logSender:(id)a0;
- (void)_updateFocusDebuggerStatusSectionForMenu:(id)a0;
- (void)_updateNavigateSectionForMenu:(id)a0;
- (void)_updateUserDefaultsSectionForMenu:(id)a0;

@end
