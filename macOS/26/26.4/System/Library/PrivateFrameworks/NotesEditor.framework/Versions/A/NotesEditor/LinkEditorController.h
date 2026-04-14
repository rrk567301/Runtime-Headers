@class NSViewController, ICNote, NSView, ICNAEventReporter, NSString, ICLinkAcceleratorController;
@protocol ICLinkEditorDelegate;

@interface LinkEditorController : NSObject <ICLinkAcceleratorControllerDelegate> {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ _viewModel;
    void /* unknown type, empty encoding */ textSelection;
    void /* unknown type, empty encoding */ linkTextChanged;
    void /* unknown type, empty encoding */ selectedNoteChange;
    void /* unknown type, empty encoding */ selectedURLChange;
    void /* unknown type, empty encoding */ selectedURLTextChange;
    void /* unknown type, empty encoding */ currentQueryString;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } lastSelectedRangeForAccelerator;
@property (nonatomic, readonly) BOOL languageHasSpaces;
@property (nonatomic, readonly) long long writingDirection;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, readonly) NSViewController *acceleratorHostingViewController;
@property (nonatomic, readonly) NSView *acceleratorHostingView;
@property (nonatomic, readonly) ICNAEventReporter *eventReporter;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, retain) id<ICLinkEditorDelegate> delegate;
@property (nonatomic) long long addApproach;
@property (nonatomic, retain) ICLinkAcceleratorController *linkAcceleratorController;

+ (void)dismissIn:(id)a0 completion:(id /* block */)a1;
+ (id)noteFor:(id)a0;
+ (id)noteIDFor:(id)a0;

- (void)cancel;
- (void)setupObservers;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)cancelAction:(id)a0;
- (void)hideAccelerator;
- (void)insertAndDismissWithCompletion:(id /* block */)a0;
- (void)acceleratorOriginNeedsUpdate;
- (void)didSelectNoteSuggestionWithIdentifier:(id)a0 title:(id)a1;
- (void)doneAction:(id)a0;
- (void)insertLinkURLWithUrl:(id)a0;
- (void)insertTextNoteLinkWithNoteSelection:(id)a0 note:(id)a1;
- (void)insertTokenizedNoteLinkWithNoteSelection:(id)a0;
- (void)removeLink;
- (id)sanitizedWithString:(id)a0;
- (void)selectedSuggestionWithSelection:(id)a0;
- (void)selectedURLWithSelection:(id)a0;
- (void)validateSelection;

@end
