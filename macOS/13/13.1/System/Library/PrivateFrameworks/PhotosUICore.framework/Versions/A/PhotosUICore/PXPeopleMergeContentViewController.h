@protocol PXPerson;

@interface PXPeopleMergeContentViewController : UXViewController

@property (retain, nonatomic) id<PXPerson> targetPerson;
@property (retain, nonatomic) id<PXPerson> draggedPerson;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (id)initWithTargetPerson:(id)a0 draggedPerson:(id)a1;

@end
