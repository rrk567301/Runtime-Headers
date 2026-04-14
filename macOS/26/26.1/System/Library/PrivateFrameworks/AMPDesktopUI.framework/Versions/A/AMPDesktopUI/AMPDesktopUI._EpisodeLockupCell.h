@class NSFormatter, NSColor, NSString;
@protocol AMPEpisodeLockupModel;

@interface AMPDesktopUI._EpisodeLockupCell : NSTableCellView {
    void /* unknown type, empty encoding */ kNumDescriptionLines;
    void /* unknown type, empty encoding */ watchedLabelObserver;
}

@property (nonatomic, weak) void /* function */ epNumberLabel;
@property (nonatomic, weak) void /* function */ epTitleLabel;
@property (nonatomic, weak) void /* function */ epDescriptionLabel;
@property (nonatomic, weak) void /* function */ descriptionHeight;
@property (nonatomic, weak) void /* function */ artworkView;
@property (nonatomic, weak) void /* function */ watchedAmountView;
@property (nonatomic, weak) void /* function */ downloadButton;
@property (nonatomic, retain) NSFormatter *durationFormatter;
@property (nonatomic, copy) id objectValue;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) id<AMPEpisodeLockupModel> viewModel;
@property (nonatomic) BOOL isRolled;
@property (nonatomic, readonly) double percentageWatched;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) double downloadProgress;
@property (nonatomic, readonly) NSColor *numberTint;
@property (nonatomic, readonly) NSString *durationDateString;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)doActionClicked:(id)a0;
- (id)propertyKeysForViewSpy;
- (void)reflectDownloadBtn:(id)a0;

@end
