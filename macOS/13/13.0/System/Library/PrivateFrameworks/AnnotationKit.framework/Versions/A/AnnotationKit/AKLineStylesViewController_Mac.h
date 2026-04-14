@class NSStackView, NSMutableArray, AKController;

@interface AKLineStylesViewController_Mac : NSViewController

@property (retain) NSStackView *stackView;
@property (retain) NSMutableArray *viewItems;
@property (weak) AKController *controller;
@property (copy) id /* block */ actionBlock;

+ (id)generateLineImageForTag:(long long)a0 isVariableWidth:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (id)_separatorView;
- (BOOL)validateUserInterfaceItems;
- (void)_selectOption:(id)a0;
- (void)_setupLineStyles;
- (id)_lineStyleItemForTag:(long long)a0;
- (id)_imageForTag:(long long)a0;
- (id)_lineStyleToolTipForTag:(long long)a0;

@end
