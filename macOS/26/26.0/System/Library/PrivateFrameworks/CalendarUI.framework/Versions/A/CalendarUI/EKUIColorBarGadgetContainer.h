@class CalUILayerBackedView, EKUIGadgetContainer, EKEventViewControllerDefaultImpl, NSColor;

@interface EKUIColorBarGadgetContainer : EKUIGadgetContainer

@property (retain) CalUILayerBackedView *colorBarView;
@property (retain) EKUIGadgetContainer *titleDateContainer;
@property (readonly, nonatomic) EKEventViewControllerDefaultImpl *eventVC;
@property (retain, nonatomic) NSColor *color;

- (id)initWithViewController:(id)a0;
- (void)updateConstraints;
- (void)setExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraintsIncludingSubtree;

@end
