@class NSURL;
@protocol QLMarkupViewControllerDelegate;

@interface QLMarkupViewController : MarkupViewController

@property BOOL isDirty;
@property (retain) NSURL *originalURL;
@property (weak) id<QLMarkupViewControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positioningRectForCandidatePickerForContentViewController:(id)a0;
- (void)editDetectedForAnnotationController:(id)a0;
- (void)setFileURL:(id)a0 withArchivedModelData:(id)a1 preloadedView:(id)a2;
- (BOOL)saveEditingToURL:(id)a0;
- (void)applyCropIfNecessary;
- (void)clearUndoStack;

@end
