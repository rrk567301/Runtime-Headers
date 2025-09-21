@class NSString, NSMenuItem;
@protocol VKCImageSubjectHighlightViewDelegate;

@interface VKCImageSubjectHighlightView : VKCImageSubjectBaseView <NSMenuItemValidation>

@property (readonly, nonatomic) NSMenuItem *copySubjectMenuItem;
@property (readonly, nonatomic) NSMenuItem *shareSubjectMenuItem;
@property (weak, nonatomic) id<VKCImageSubjectHighlightViewDelegate> delegate;
@property (nonatomic) char subjectHighlightActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (char)validateMenuItem:(id)a0;
- (char)wantsLayer;
- (void)highlightSubjectAtIndexSet:(id)a0 showCallout:(char)a1 showBurst:(char)a2 burstPoint:(struct CGPoint { double x0; double x1; })a3 animated:(char)a4;
- (void)_copySubject:(id)a0;
- (void)_shareSubject:(id)a0;
- (void)configureStateForSubjectHighlightActiveAnimated:(char)a0;
- (void)loadImageSubjectIfNecessaryWithCompletion:(id /* block */)a0;
- (id)menuItemsForEvent:(id)a0;
- (void)selectSubjectAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setSubjectHighlightActive:(char)a0 animated:(char)a1;

@end
