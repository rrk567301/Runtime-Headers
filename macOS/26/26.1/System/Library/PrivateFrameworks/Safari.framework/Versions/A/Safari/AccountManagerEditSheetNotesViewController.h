@class NSTextField, NSScrollView, NSString, NSTextView;
@protocol AccountManagerEditSheetNotesViewControllerDelegate;

@interface AccountManagerEditSheetNotesViewController : NSViewController <NSTextViewDelegate>

@property (weak, nonatomic) NSTextField *label;
@property (weak, nonatomic) NSScrollView *textViewScrollView;
@property (weak, nonatomic) NSTextView *textView;
@property (weak, nonatomic) id<AccountManagerEditSheetNotesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)textDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
