@interface AMPDesktopUI.LibraryMovieHeaderLockup : NSTableCellView <AMPRollableArtworkLockupModel>

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artworkView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ title1Field;
@property (nonatomic, weak) void /* unknown type, empty encoding */ calloutField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ badges;
@property (nonatomic, weak) void /* unknown type, empty encoding */ actionButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ downloadButton;
@property (nonatomic, readonly) unsigned long long playButtonState;
@property (nonatomic, readonly) SEL playPauseStopAction;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic) void /* unknown type, empty encoding */ downloadButtonState;
@property (nonatomic) void /* unknown type, empty encoding */ downloadAction;
@property (nonatomic, retain) void /* unknown type, empty encoding */ actionMenu;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doActionButtonClicked:(id)a0;
- (void)doDownloadButtonClicked:(id)a0;
- (void)noOp;
- (void)requestArtworkAtSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
