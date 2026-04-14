@class NSMenu, NSArray;

@interface OpenPageWithSimulatorMenuController : NSObject {
    struct optional<unsigned long long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _notificationHandlerID;
}

@property (readonly, nonatomic) NSMenu *menu;
@property (copy, nonatomic) NSArray *leadingItems;

- (void)_update;
- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_handleRWINotification:(id)a0;
- (id)_menuSectionDisplayOrder;
- (void)_populateItemsForSimulators:(id)a0;
- (void)_registerForRWINotifications;
- (void)_unregisterForRWINotifications;
- (id)initWithExistingMenu:(id)a0;
- (void)showHelpForAddSimulators:(id)a0;
- (void)showHelpForXcodeNotInstalled:(id)a0;

@end
