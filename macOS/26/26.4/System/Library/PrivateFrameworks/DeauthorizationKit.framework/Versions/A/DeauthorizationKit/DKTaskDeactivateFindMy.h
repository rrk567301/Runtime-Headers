@class NSWindow, FMDUIFMMController;

@interface DKTaskDeactivateFindMy : DKTask

@property (retain) FMDUIFMMController *findMyUIController;
@property (retain) NSWindow *hostWindow;

- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (id)identifier;
- (id)initWithHostWindow:(id)a0;
- (BOOL)runWithError:(id *)a0;
- (void)_removeFindMyMacAccountsReturningError:(id *)a0;
- (id)findMyMacAccountUsername;

@end
