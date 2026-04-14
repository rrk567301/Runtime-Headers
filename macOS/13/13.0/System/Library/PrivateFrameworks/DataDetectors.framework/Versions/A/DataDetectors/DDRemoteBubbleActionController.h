@class NSView, DDPopover;

@interface DDRemoteBubbleActionController : DDGenericBubbleController <DDMiscActionProtocol> {
    DDPopover *_bubble;
}

@property (retain) NSView *view;

+ (unsigned long long)customContentType;
+ (id)controllerWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (id)runActionWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (BOOL)displaysNonModalUI;
+ (BOOL)requiresService;
+ (BOOL)requiresViewBridge;
+ (struct CGSize { double x0; double x1; })customRawMenuSizeForContext:(id)a0;
+ (unsigned long long)customRawMenuEdgeForContext:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })customRectForContext:(id)a0;
+ (id)customRawMenuItemForContext:(id)a0;

- (void).cxx_destruct;
- (void)closeAndReleaseBubble;
- (BOOL)userDidModifyContent;

@end
