@class UIWindow, NSString, NSDictionary, UINSSceneHostingViewController, NSPopover;
@protocol UIPopoverPresentationControllerSourceItem;

@interface UINSPopoverManager : NSObject <NSPopoverDelegate, UINSSceneHostingViewControllerDelegate> {
    NSPopover *_popover;
    UIWindow *_parentUIWindow;
    UIWindow *_popoverUIWindow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRectInParentUIWindow;
    struct CGSize { double width; double height; } _contentSizeInAppKitPoints;
    struct CGSize { double width; double height; } _contentSizeInUIKitPoints;
    id /* block */ _dismissalBlock;
    id /* block */ _presentationCompletionBlock;
    id /* block */ _allowPopoverToCloseBlock;
    unsigned long long _preferredEdge;
    char _detached;
    char _showsArrow;
    id /* block */ _detachCompletionBlock;
    long long _preferredHorizontalAlignment;
    char _isRTL;
    UINSSceneHostingViewController *_sceneHost;
    id /* block */ _setupCompletionHandler;
    char _sceneCreated;
    id /* block */ _deferredUpdateBlock;
}

@property (weak, nonatomic) id<UIPopoverPresentationControllerSourceItem> sourceItem;
@property (nonatomic) char usingSourceItemView;
@property (nonatomic) char shouldConvertToScene;
@property (nonatomic) char isModalInPresentation;
@property (nonatomic) char appkitDidPresent;
@property (nonatomic) char uikitTransitionDidEnd;
@property (readonly) NSString *sceneIdentifier;
@property (readonly) NSDictionary *respondersToRestore;
@property (nonatomic) long long windowAppearance;
@property char supportsDetach;
@property (copy, nonatomic) id /* block */ finalizeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)popoverDidShow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positioningRect;
- (void)dismissPopover;
- (void)popoverDidClose:(id)a0;
- (void)popoverDidDetach:(id)a0;
- (char)popoverShouldClose:(id)a0;
- (char)popoverShouldDetach:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)_executePresentationCompletionBlockIfNecessary;
- (void)_updatePopoverAppearance;
- (void)closePopoverOnExit;
- (void)detachFromPoint:(struct CGPoint { double x0; double x1; })a0 withCompletionCallback:(id /* block */)a1;
- (id)initWithPopoverWindow:(id)a0 parentWindow:(id)a1 respondersToRestore:(id)a2 sourceRectInParentUIWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 contentSize:(struct CGSize { double x0; double x1; })a4 permittedArrowDirections:(long long)a5 showsArrow:(char)a6 windowAppearance:(long long)a7 isModalInPresentation:(char)a8 shouldConvertToScene:(char)a9 sourceItem:(id)a10 withDismissalBlock:(id /* block */)a11 setupCompletionHandler:(id /* block */)a12 didPresentBlock:(id /* block */)a13 allowPopoverToCloseBlock:(id /* block */)a14;
- (id)popoverScene;
- (unsigned long long)preferredEdgeForPermittedArrowDirections:(long long)a0;
- (void)sceneHostingViewControllerDidCreateScene:(id)a0;
- (void)transitionDidEnd:(char)a0;
- (void)updateSourceRectInParentUIWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentSize:(struct CGSize { double x0; double x1; })a1 preferredHorizontalAlignment:(long long)a2 showsArrow:(char)a3 isRTL:(char)a4;

@end
