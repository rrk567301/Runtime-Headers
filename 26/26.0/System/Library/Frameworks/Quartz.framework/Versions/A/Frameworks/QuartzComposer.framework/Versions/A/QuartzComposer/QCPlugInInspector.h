@class QCPlugInViewController;

@interface QCPlugInInspector : QCInspector {
    QCPlugInViewController *_viewController;
}

+ (id)viewNibName;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)view;
- (id)viewTitle;
- (id)initWithBundle:(id)a0 nibName:(id)a1;
- (void)resetView;
- (void)setupViewForPatch:(id)a0;

@end
