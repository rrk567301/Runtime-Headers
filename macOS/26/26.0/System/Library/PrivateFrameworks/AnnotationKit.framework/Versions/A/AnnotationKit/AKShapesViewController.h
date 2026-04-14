@class AKShapesGridViewController, AKController, NSStackView, NSButton;

@interface AKShapesViewController : NSViewController

@property (retain) NSStackView *stackView;
@property (retain) AKShapesGridViewController *shapesPicker;
@property (retain, nonatomic) NSButton *maskButton;
@property (retain, nonatomic) NSButton *loupeButton;
@property (weak) AKController *controller;
@property (copy) id /* block */ actionBlock;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)_performAction:(id)a0;
- (id)_separatorView;
- (void)_validateItems;

@end
