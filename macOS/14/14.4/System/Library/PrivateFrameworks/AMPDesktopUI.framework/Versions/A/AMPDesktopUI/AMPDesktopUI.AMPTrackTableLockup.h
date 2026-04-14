@interface AMPDesktopUI.AMPTrackTableLockup : NSTableCellView <NSOutlineViewDataSource>

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ theTable;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artworkColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ trackNumberColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ twoLineNameColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ oneLineNameColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artistColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ loveColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ explicitColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ downloadStateColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ albumColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ durationColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ genreColumn;
@property (nonatomic, weak) void /* unknown type, empty encoding */ yearColumn;
@property (nonatomic) void /* unknown type, empty encoding */ minRequiredWidth;
@property (nonatomic) void /* unknown type, empty encoding */ minWidthForSeparateArtist;
@property (nonatomic) void /* unknown type, empty encoding */ minWidthForAlbum;
@property (nonatomic) void /* unknown type, empty encoding */ minWidthForGenre;
@property (nonatomic) void /* unknown type, empty encoding */ minWidthForYear;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

+ (id)lockup;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (id)propertyKeysForViewSpy;

@end
