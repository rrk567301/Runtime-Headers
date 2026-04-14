@class PHPerson;

@interface PXPeopleMergeContentViewController : UXViewController

@property (retain, nonatomic) PHPerson *targetPerson;
@property (retain, nonatomic) PHPerson *draggedPerson;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (id)initWithTargetPerson:(id)a0 draggedPerson:(id)a1;

@end
