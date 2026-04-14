@class NSView, NSString, AutomaticPasswordPopoverViewController;

@interface AutomaticPasswordPopoverController : NSObject <AutomaticPasswordPopoverViewControllerDelegate> {
    AutomaticPasswordPopoverViewController *_automaticPasswordPopoverViewController;
    int _generatedPasswordInteractionType;
    BOOL _shouldIgnoreInteractionsWithPopover;
}

@property (readonly, nonatomic) void *formCompletionController;
@property (readonly, nonatomic) NSView *positioningView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positioningRectInViewCoordinates;
@property (readonly, nonatomic, getter=isShowingPopover) BOOL showingPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)dismissPopover;
- (void)showPopover;
- (void)automaticPasswordPopoverViewControllerDidDisappear:(id)a0;
- (void)automaticPasswordPopoverViewController:(id)a0 didUpdateSelectionToUseStrongPassword:(BOOL)a1;
- (id)initWithFormCompletionController:(void *)a0 positioningView:(id)a1 positioningRectInViewCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
