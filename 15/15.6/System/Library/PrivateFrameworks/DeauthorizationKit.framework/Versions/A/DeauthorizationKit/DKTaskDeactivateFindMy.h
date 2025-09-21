@class NSWindow, FMDUIFMMController;

@interface DKTaskDeactivateFindMy : DKTask

@property (retain) FMDUIFMMController *findMyUIController;
@property (retain) NSWindow *hostWindow;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (char)runWithError:(id *)a0;
- (void)_removeFindMyMacAccountsReturningError:(id *)a0;
- (id)findMyMacAccountUsername;

@end
