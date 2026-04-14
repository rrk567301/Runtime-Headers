@class NSArray, UXView, NSTextField;

@interface KHInspectorTileViewController : UXViewController

@property (retain, nonatomic) NSTextField *titleView;
@property double titleHeight;
@property (retain, nonatomic) NSArray *titleConstraints;
@property (retain, nonatomic) UXView *horizontalSeparator;
@property (retain, nonatomic) NSArray *customConstraints;
@property (retain, nonatomic) UXView *contentView;
@property (nonatomic) double contentWidth;
@property (nonatomic) BOOL drawsSeparator;

- (void)setupConstraints;
- (id)title;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setTitle:(id)a0;
- (void)loadView;

@end
