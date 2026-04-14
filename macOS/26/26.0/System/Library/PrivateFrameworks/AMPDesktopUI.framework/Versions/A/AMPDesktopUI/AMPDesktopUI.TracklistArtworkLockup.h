@class NSLayoutConstraint;
@protocol AMPTracklistAlbumModel;

@interface AMPDesktopUI.TracklistArtworkLockup : NSTableCellView <NSOutlineViewDataSource>

@property (nonatomic, retain) id<AMPTracklistAlbumModel> viewModel;
@property (nonatomic, weak) void /* function */ artworkView;
@property (nonatomic, weak) void /* function */ totalsLineField;
@property (nonatomic, retain) NSLayoutConstraint *artworkAspectConstraint;
@property (nonatomic, retain) NSLayoutConstraint *artworkPinHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *artworkProportionalWidthConstraint;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)propertyKeysForViewSpy;

@end
