@class ICLinkAcceleratorController, NSViewController, ICNote, NSView, ICNAEventReporter, NSString, _TtC11NotesEditor14LinkTokenField;
@protocol ICLinkEditorDelegate;

@interface LinkEditorViewController : NSViewController <NSTokenFieldDelegate, NSTokenTextFieldDelegation, ICLinkAcceleratorControllerDelegate> {
    void /* unknown type, empty encoding */ linkEditorView;
    void /* unknown type, empty encoding */ singleWidthSpace;
    void /* unknown type, empty encoding */ textSelection;
    void /* unknown type, empty encoding */ _viewModel;
    void /* unknown type, empty encoding */ linkTextChanged;
    void /* unknown type, empty encoding */ selectedNoteChange;
    void /* unknown type, empty encoding */ selectedURLChange;
    void /* unknown type, empty encoding */ selectedURLTextChange;
    void /* function */ currentQueryString;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } lastSelectedRangeForAccelerator;
@property (nonatomic, readonly) BOOL languageHasSpaces;
@property (nonatomic, readonly) long long writingDirection;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, readonly) NSViewController *acceleratorHostingViewController;
@property (nonatomic, readonly) NSView *acceleratorHostingView;
@property (nonatomic, readonly) ICNAEventReporter *eventReporter;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, retain) _TtC11NotesEditor14LinkTokenField *tokenField;
@property (nonatomic, retain) id<ICLinkEditorDelegate> delegate;
@property (nonatomic) long long addApproach;
@property (nonatomic, retain) ICLinkAcceleratorController *linkAcceleratorController;
@property (nonatomic, copy) NSString *currentQueryString;

+ (void)dismissIn:(id)a0 completion:(id /* block */)a1;

- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)viewDidLoad;
- (void)loadView;
- (void)cancel;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setupObservers;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 hasMenuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 setUpTokenAttachmentCell:(id)a1 forRepresentedObject:(id)a2;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(long long)a2;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (void)doneAction;
- (void)cancelAction:(id)a0;
- (void)insertAndDismissWithCompletion:(id /* block */)a0;
- (void)acceleratorOriginNeedsUpdate;
- (void)didSelectNoteSuggestionWithIdentifier:(id)a0 title:(id)a1;
- (void)noteDecryptedStatusDidChange;
- (void)removeLink;
- (void)selectedSuggestionWithSelection:(id)a0;
- (void)selectedURLWithSelection:(id)a0;
- (void)validateSelection;

@end
