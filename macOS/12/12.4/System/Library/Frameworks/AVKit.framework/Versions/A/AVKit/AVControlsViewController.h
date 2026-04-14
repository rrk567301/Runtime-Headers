@class NSString, NSImage, AVControlsPresentationContext, NSMutableArray;

@interface AVControlsViewController : NSViewController <AVControlsContainerViewControllerContent> {
    NSMutableArray *_bindings;
}

@property (retain, nonatomic) AVControlsPresentationContext *presentationContext;
@property (readonly) NSString *controlsStyleIdentifier;
@property (readonly) NSImage *backgroundBackdropViewMaskImage;
@property (readonly) long long preferredBlendingMode;
@property (readonly) long long preferredEffectMaterial;
@property (readonly) BOOL movableControlsContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initialFirstResponder;
- (double)minimumWidth;
- (long long)layoutStyle;
- (double)minimumHeight;
- (void)setupNextKeyView;
- (void)unbindAllObjects;
- (void)bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (struct { double x0; double x1; double x2; double x3; })controlsContentViewMargin;
- (void)controlsContainerViewControllerWillShowView:(id)a0;
- (void)controlsContainerViewControllerDidHideView:(id)a0;
- (void)controlsContainerViewController:(id)a0 willAttachControlsWithContext:(id)a1;
- (void)controlsContainerViewController:(id)a0 didDetachControlsWithContext:(id)a1;
- (id)additionalControlsContentViews;
- (void)controlsContainerViewController:(id)a0 willDetachControlsWithContext:(id)a1;
- (void)controlsContainerViewController:(id)a0 didAttachControlsWithContext:(id)a1;
- (void)controlsContainerViewControllerDidShowView:(id)a0;
- (void)controlsContainerViewControllerWillHideView:(id)a0;

@end
