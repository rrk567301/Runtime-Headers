@class WTSmartReplyConfiguration, NSView, NSString, WTWritingToolsRemoteViewController, NSUUID, NSObject, NSPopover, NSPasteboard, WTAnalyticsDelegate;
@protocol NSServicesMenuRequestor, NSTextInputClient, WTWritingToolsDelegate, NSTextInputClient_Async;

@interface WTWritingToolsViewController : NSViewController <NSPopoverDelegate>

@property (class, readonly, getter=isAvailable) BOOL available;

@property (nonatomic) long long requestedTool;
@property (retain, nonatomic) WTSmartReplyConfiguration *smartReplyConfig;
@property (readonly, nonatomic) BOOL textViewIsEditable;
@property (readonly, nonatomic) BOOL textViewWantsInlineEditing;
@property (readonly, nonatomic) unsigned long long allowedResultOptions;
@property (retain, nonatomic) WTWritingToolsRemoteViewController *remoteViewController;
@property (weak, nonatomic) NSPopover *popover;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionRect;
@property (weak, nonatomic) NSView *positioningView;
@property (nonatomic) BOOL popoverDidShow;
@property (weak, nonatomic) id<NSServicesMenuRequestor> servicesMenuRequestor;
@property (retain, nonatomic) NSString *servicesMenuRequestorReturnType;
@property (retain, nonatomic) NSPasteboard *pasteboard;
@property (readonly, nonatomic) id<NSTextInputClient> textInputClient;
@property (readonly, nonatomic) id<NSTextInputClient_Async> textInputClientAsync;
@property (readonly, nonatomic) BOOL clientIsAsync;
@property (retain, nonatomic) id appFocusLostObserver;
@property (retain, nonatomic) id undoObserver;
@property (retain, nonatomic) id redoObserver;
@property (nonatomic) unsigned long long remainingUndoCount;
@property (nonatomic) unsigned long long remainingRedoCount;
@property (retain, nonatomic) WTAnalyticsDelegate *analyticsDelegate;
@property (readonly, nonatomic) NSUUID *analyticsUUID;
@property (weak) NSObject<WTWritingToolsDelegate> *writingToolsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)endWritingTools;
- (void)popoverDidShow:(id)a0;
- (id)currentSession;
- (void)loadView;
- (BOOL)mouseDownEvent:(id)a0 wouldReactivatePopover:(id)a1;
- (void)popoverDidDetach:(id)a0;
- (BOOL)popoverShouldClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (id)selectedText;
- (id)suggestions;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_repositionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 positioningView:(id)a1;
- (void)activateRemoteView;
- (id)initWithRequestedTool:(long long)a0;
- (id)initWithRequestedTool:(long long)a0 smartReplyConfiguration:(id)a1;
- (id)initWithRequestedTool:(long long)a0 smartReplyConfiguration:(id)a1 selectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 positioningView:(id)a3;
- (struct CGSize { double x0; double x1; })initialPanelSizeForPanelType:(long long)a0;
- (BOOL)isShowingInPopoverRelativeToSelectionOfView:(id)a0;
- (long long)panelTypeForRequestedTool:(long long)a0;
- (id)selectedTextThroughServicesMenuRequestor;
- (void)showInPopover:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 forRequestedTool:(long long)a3;
- (void)showWritingTool:(long long)a0;

@end
