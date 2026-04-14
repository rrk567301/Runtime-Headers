@class AKShapesGridViewController, AKController, NSStackView, NSButton;

@interface AKShapesViewController : NSViewController

@property (retain) NSStackView *stackView;
@property (retain) AKShapesGridViewController *shapesPicker;
@property (retain, nonatomic) NSButton *maskButton;
@property (retain, nonatomic) NSButton *loupeButton;
@property (weak) AKController *controller;
@property (copy) id /* block */ actionBlock;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)_performAction:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (id)_separatorView;
- (void)_validateItems;

@end
