@interface AMPDesktopUI.TracklistArtworkLockup : NSTableCellView <NSOutlineViewDataSource>

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artworkView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artworkShadow;
@property (nonatomic, weak) void /* unknown type, empty encoding */ totalsLineField;
@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkAspectConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkPinHeightConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkProportionalWidthConstraint;
@property (nonatomic, copy) id objectValue;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)awakeFromNib;
- (id)propertyKeysForViewSpy;
- (void)startImageLoadingFromModel:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)artImageForModel:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1;

@end
