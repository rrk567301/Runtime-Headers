@interface AMPDesktopUI.ProductHeaderLockup : NSTableCellView <NSOutlineViewDataSource>

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ title1Field;
@property (nonatomic, weak) void /* unknown type, empty encoding */ title2Field;
@property (nonatomic, weak) void /* unknown type, empty encoding */ calloutField;
@property (nonatomic, readonly) BOOL addButtonHidden;
@property (nonatomic, readonly) BOOL downloadButtonHidden;
@property (nonatomic, readonly) BOOL downloadedLabelHidden;
@property (nonatomic, readonly) id subTitleString;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (id)propertyKeysForViewSpy;

@end
