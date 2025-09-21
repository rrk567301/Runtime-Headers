@class AXKAlertWindowController, NSWindow;

@interface AXKTrmManager : NSObject

@property (nonatomic) long long reason;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (nonatomic) char systemState;
@property (nonatomic) char dialogHasEverBeenDisplayed;
@property (retain, nonatomic) AXKAlertWindowController *windowController;

+ (id)trmManagerForReason:(long long)a0 hostWindow:(id)a1;

- (void).cxx_destruct;
- (id)_baseKey;
- (char)_hasValidReason;
- (id)_dialogHasEverBeenDisplayedKey;
- (id)_infoString;
- (char)disableTRMStateAndInformUserIfNeeded;
- (char)disableTRMStateAndInformUserIfNeededWithCompletionBlock:(id /* block */)a0;
- (id)initWithReason:(long long)a0 hostWindow:(id)a1;
- (char)shouldShowDialog;
- (void)showDialog;
- (void)showDialogWithCompletionBlock:(id /* block */)a0;

@end
