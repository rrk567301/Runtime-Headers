@class WTSmartReplyConfiguration, NSPopover, NSView, NSPasteboard, NSString, NSObject, WTWritingToolsRemoteViewController;
@protocol WTWritingToolsDelegate, NSServicesMenuRequestor, NSTextInputClient;

@interface WTWritingToolsViewController : NSViewController <NSPopoverDelegate>

@property (class, readonly, getter=isAvailable) BOOL available;

@property (nonatomic) long long requestedTool;
@property (retain, nonatomic) WTSmartReplyConfiguration *smartReplyConfig;
@property (readonly, nonatomic) BOOL textViewIsEditable;
@property (readonly, nonatomic) BOOL textViewWantsInlineEditing;
@property (readonly, nonatomic) unsigned long long allowedResultOptions;
@property (retain, nonatomic) WTWritingToolsRemoteViewController *remoteViewController;
@property (weak, nonatomic) NSPopover *popover;
@property (weak, nonatomic) NSView *positioningView;
@property (nonatomic) BOOL popoverDidShow;
@property (weak, nonatomic) id<NSServicesMenuRequestor> servicesMenuRequestor;
@property (retain, nonatomic) NSPasteboard *pasteboard;
@property (readonly, nonatomic) id<NSTextInputClient> textInputClient;
@property (retain, nonatomic) id appFocusLostObserver;
@property (retain, nonatomic) id undoObserver;
@property (retain, nonatomic) id redoObserver;
@property (nonatomic) unsigned long long remainingUndoCount;
@property (nonatomic) unsigned long long remainingRedoCount;
@property (weak) NSObject<WTWritingToolsDelegate> *writingToolsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)popoverDidShow:(id)a0;
- (id)currentSession;
- (void)loadView;
- (BOOL)mouseDownEvent:(id)a0 wouldReactivatePopover:(id)a1;
- (void)popoverDidDetach:(id)a0;
- (BOOL)popoverShouldClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (id)suggestions;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)activateRemoteView;
- (id)initWithRequestedTool:(long long)a0;
- (id)initWithRequestedTool:(long long)a0 smartReplyConfiguration:(id)a1;
- (id)initWithRequestedTool:(long long)a0 smartReplyConfiguration:(id)a1 positioningView:(id)a2;
- (struct CGSize { double x0; double x1; })initialPanelSizeForPanelType:(long long)a0;
- (BOOL)isShowingInPopoverRelativeToSelectionOfView:(id)a0;
- (long long)panelTypeForRequestedTool:(long long)a0;
- (unsigned long long)preferredEdgeOfSelectionRect;
- (unsigned long long)preferredEdgeOfSelectionRectForRequestedTool:(long long)a0;
- (void)showInPopover:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 forRequestedTool:(long long)a3;

@end
