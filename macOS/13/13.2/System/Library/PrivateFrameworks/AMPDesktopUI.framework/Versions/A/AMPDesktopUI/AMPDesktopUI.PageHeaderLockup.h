@interface AMPDesktopUI.PageHeaderLockup : NSTableCellView <NSOutlineViewDataSource>

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ title1Field;
@property (nonatomic, weak) void /* unknown type, empty encoding */ subheadField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ calloutField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ shuffleButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ menuButton;
@property (nonatomic, readonly) id calloutString;
@property (nonatomic, readonly) BOOL subheadAreaHidden;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (id)propertyKeysForViewSpy;

@end
