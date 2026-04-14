@interface TheDialogController : NSWindowController {
    long long userClickedOk;
    unsigned short timesShown;
}

- (void)showWindow:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)windowDidLoad;
- (id)init;
- (void)closeDialog:(id)a0;
- (void)okDialog:(id)a0;

@end
