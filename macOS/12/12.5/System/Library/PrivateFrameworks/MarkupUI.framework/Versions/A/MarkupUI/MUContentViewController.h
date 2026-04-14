@class AKController;
@protocol MUContentViewControllerDelegate;

@interface MUContentViewController : NSViewController

@property (weak) id<MUContentViewControllerDelegate> delegate;
@property (retain) AKController *annotationController;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1 delegate:(id)a2;

@end
