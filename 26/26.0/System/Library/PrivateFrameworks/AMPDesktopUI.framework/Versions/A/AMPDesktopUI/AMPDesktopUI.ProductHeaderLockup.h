@protocol ProductHeaderLockupModel;

@interface AMPDesktopUI.ProductHeaderLockup : NSTableCellView <NSOutlineViewDataSource, NSTextFieldDelegate>

@property (nonatomic, retain) id<ProductHeaderLockupModel> viewModel;
@property (nonatomic, weak) void /* function */ title1Field;
@property (nonatomic, weak) void /* function */ title2Field;
@property (nonatomic, weak) void /* function */ calloutField;
@property (nonatomic, weak) void /* function */ downloadButton;
@property (nonatomic, readonly) BOOL addButtonHidden;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) double downloadProgress;
@property (nonatomic, readonly) id subTitleString;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)propertyKeysForViewSpy;
- (void)reflectDownloadBtn:(id)a0;

@end
