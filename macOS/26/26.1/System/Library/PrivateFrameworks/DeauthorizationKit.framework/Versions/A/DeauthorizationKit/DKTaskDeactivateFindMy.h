@class NSWindow, FMDUIFMMController;

@interface DKTaskDeactivateFindMy : DKTask

@property (retain) FMDUIFMMController *findMyUIController;
@property (retain) NSWindow *hostWindow;

- (id)identifier;
- (id)taskDescription;
- (void)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithHostWindow:(id)a0;
- (BOOL)runWithError:(id *)a0;
- (void)_removeFindMyMacAccountsReturningError:(id *)a0;
- (id)findMyMacAccountUsername;

@end
