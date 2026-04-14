@class AXKAlertWindowController, NSWindow;

@interface AXKTrmManager : NSObject

@property (nonatomic) long long reason;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (nonatomic) BOOL systemState;
@property (nonatomic) BOOL dialogHasEverBeenDisplayed;
@property (retain, nonatomic) AXKAlertWindowController *windowController;

+ (id)trmManagerForReason:(long long)a0 hostWindow:(id)a1;

- (void).cxx_destruct;
- (id)_baseKey;
- (id)initWithReason:(long long)a0 hostWindow:(id)a1;
- (id)_infoString;
- (id)_dialogHasEverBeenDisplayedKey;
- (BOOL)_hasValidReason;
- (void)showDialog;
- (void)showDialogWithCompletionBlock:(id /* block */)a0;
- (BOOL)disableTRMStateAndInformUserIfNeeded;
- (BOOL)shouldShowDialog;
- (BOOL)disableTRMStateAndInformUserIfNeededWithCompletionBlock:(id /* block */)a0;

@end
