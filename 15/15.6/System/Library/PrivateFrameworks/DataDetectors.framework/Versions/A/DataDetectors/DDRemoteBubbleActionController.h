@class NSView, DDPopover;

@interface DDRemoteBubbleActionController : DDGenericBubbleController <DDMiscActionProtocol> {
    DDPopover *_bubble;
}

@property (retain) NSView *view;

+ (char)requiresService;
+ (id)controllerWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (unsigned long long)customContentType;
+ (unsigned long long)customRawMenuEdgeForContext:(id)a0;
+ (id)customRawMenuItemForContext:(id)a0;
+ (struct CGSize { double x0; double x1; })customRawMenuSizeForContext:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })customRectForContext:(id)a0;
+ (char)displaysNonModalUI;
+ (char)requiresViewBridge;
+ (id)runActionWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;

- (void).cxx_destruct;
- (void)closeAndReleaseBubble;
- (char)userDidModifyContent;

@end
