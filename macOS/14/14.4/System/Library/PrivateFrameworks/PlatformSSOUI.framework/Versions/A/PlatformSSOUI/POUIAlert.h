@class NSAlert;

@interface POUIAlert : NSWindowController

@property (retain) NSAlert *alert;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (void)showWindow:(id)a0;
- (void)didCompleteWithResult:(unsigned long long)a0;
- (void)closeDialog;
- (id)initWithMessage:(id)a0 messageTest:(id)a1;
- (void)presentDialogWithCompletion:(id /* block */)a0;
- (void)OKClicked:(id)a0;
- (id)createAlert:(id)a0 messageTest:(id)a1;

@end
