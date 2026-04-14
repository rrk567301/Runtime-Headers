@class NSImage, NSString, NSAttributedString;

@interface AMPDesktopUI.AlbumHeaderLockup : NSTableCellView <NSOutlineViewDataSource>

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artworkView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artworkShadow;
@property (nonatomic, weak) void /* unknown type, empty encoding */ title1Field;
@property (nonatomic, weak) void /* unknown type, empty encoding */ title2Field;
@property (nonatomic, weak) void /* unknown type, empty encoding */ title3Field;
@property (nonatomic, weak) void /* unknown type, empty encoding */ calloutField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ dolbyBadge;
@property (nonatomic, weak) void /* unknown type, empty encoding */ digitalMasterBadge;
@property (nonatomic, weak) void /* unknown type, empty encoding */ descriptionField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ descriptionContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ shuffleButton;
@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkAspectConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkPinHeightConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkProportionalWidthConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ titleProportionalWidthConstraint;
@property (nonatomic, readonly) NSImage *artworkImage;
@property (nonatomic, readonly) NSString *playButtonTitle;
@property (nonatomic, readonly) BOOL addButtonHidden;
@property (nonatomic, readonly) BOOL downloadButtonHidden;
@property (nonatomic, readonly) BOOL downloadedLabelHidden;
@property (nonatomic, copy) id title1AdornedString;
@property (nonatomic, copy) id subTitleString;
@property (nonatomic, readonly) NSAttributedString *terTitleString;
@property (nonatomic, readonly) NSString *descriptionPlaceholder;
@property (nonatomic, readonly) BOOL descriptionIsVisible;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)propertyKeysForViewSpy;

@end
