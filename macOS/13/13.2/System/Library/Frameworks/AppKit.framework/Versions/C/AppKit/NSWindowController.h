@class NSDocument, NSString, NSArray, NSViewController, NSWindowControllerMoreIVars, NSWindow;

@interface NSWindowController : NSResponder <NSSeguePerforming> {
    NSWindow *_window;
    NSString *_windowNibName;
    NSDocument *_document;
    NSArray *_topLevelObjects;
    id _owner;
    struct __wcFlags { unsigned char shouldCloseDocument : 1; unsigned char shouldCascade : 1; unsigned char nibIsLoaded : 1; unsigned char nibNameIsPath : 1; unsigned char settingWindowsContentViewController : 1; unsigned char didInitWithCoder : 1; unsigned char nibIsMakingConnections : 1; unsigned char sentWindowWillLoad : 1; unsigned int RESERVED : 24; } _wcFlags;
    NSWindowControllerMoreIVars *_moreVars;
    NSArray *_previewRepresentableActivityItems;
}

@property (readonly) NSViewController *presentingViewController;
@property (copy, setter=_setFrameAutosaveName:) NSString *_frameAutosaveName;
@property (readonly, copy) NSString *windowNibName;
@property (readonly, copy) NSString *windowNibPath;
@property (readonly, weak) id owner;
@property (copy) NSString *windowFrameAutosaveName;
@property BOOL shouldCascadeWindows;
@property (copy) NSArray *previewRepresentableActivityItems;
@property id document;
@property BOOL shouldCloseDocument;
@property (retain) NSViewController *contentViewController;
@property (retain) NSWindow *window;
@property (readonly, getter=isWindowLoaded) BOOL windowLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)windowControllerWithContentViewController:(id)a0;
+ (void)_doneWithLocations;

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (BOOL)presentError:(id)a0;
- (void)presentError:(id)a0 modalForWindow:(id)a1 delegate:(id)a2 didPresentSelector:(SEL)a3 contextInfo:(void *)a4;
- (id)_autounbinder;
- (void)_finishedMakingConnections;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (BOOL)shouldPerformSegueWithIdentifier:(id)a0 sender:(id)a1;
- (id)storyboard;
- (void)setStoryboard:(id)a0;
- (id)_segueTemplates;
- (void)performSegueWithIdentifier:(id)a0 sender:(id)a1;
- (void)_setPresentingViewController:(id)a0;
- (void)dismissController:(id)a0;
- (void)presentViewController:(id)a0 asPopoverRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 preferredEdge:(unsigned long long)a3 behavior:(long long)a4;
- (void)_setSegueTemplates:(id)a0;
- (void)_didRestoreUserActivity:(id)a0;
- (void)_invalidateDocumentIcon;
- (void)_setShowAutosaveButton:(BOOL)a0;
- (void)windowDidLoad;
- (void)setDocumentEdited:(BOOL)a0;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (id)_responderDebugDescription;
- (id)initWithWindowNibName:(id)a0;
- (void)_setDocumentEditingState:(long long)a0 animate:(BOOL)a1;
- (void)_setDocumentAutosavingError:(id)a0;
- (void)_setNonModalDocumentError:(id)a0;
- (void)_setDocumentShowsPanelOnClose:(BOOL)a0;
- (id)_persistentUIWindow;
- (id)_persistentUIIdentifier;
- (id)_copyPersistentUIChildren;
- (void)_unbindAll:(id)a0;
- (id)initWithWindowNibName:(id)a0 owner:(id)a1;
- (id)initWithWindowNibPath:(id)a0 owner:(id)a1;
- (void)_setRetainedSelf:(BOOL)a0;
- (void)_windowDidChangeContentViewController:(id)a0;
- (void)synchronizeWindowTitleWithDocumentName;
- (id)windowTitleForDocumentDisplayName:(id)a0;
- (void)_windowDidClose;
- (void)_findWindowLocationsWithRepresentativeWindow:(id)a0 count:(unsigned long long)a1;
- (void)showWindow:(id)a0;
- (void)windowWillLoad;
- (void)_windowDidLoad;
- (void)_windowWillLoad;
- (void)loadWindow;

@end
