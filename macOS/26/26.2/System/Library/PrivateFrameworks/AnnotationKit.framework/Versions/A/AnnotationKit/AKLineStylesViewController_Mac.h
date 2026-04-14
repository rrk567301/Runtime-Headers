@class NSStackView, NSMutableArray, AKController;

@interface AKLineStylesViewController_Mac : NSViewController

@property (retain) NSStackView *stackView;
@property (retain) NSMutableArray *viewItems;
@property (weak) AKController *controller;
@property (copy) id /* block */ actionBlock;

+ (id)generateLineImageForTag:(long long)a0 isVariableWidth:(BOOL)a1;

- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithController:(id)a0;
- (id)_separatorView;
- (id)_imageForTag:(long long)a0;
- (id)_lineStyleItemForTag:(long long)a0;
- (id)_lineStyleToolTipForTag:(long long)a0;
- (void)_selectOption:(id)a0;
- (void)_setupLineStyles;
- (void)addLineStyleViewForTag:(long long)a0;
- (void)addSeparator;
- (void)addSpacing;
- (BOOL)validateUserInterfaceItems;

@end
