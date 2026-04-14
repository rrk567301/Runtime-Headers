@class NSString, NSAttributedString;
@protocol LibraryMovieHeaderLockupModel;

@interface AMPDesktopUI.LibraryMovieHeaderLockup : NSTableCellView

@property (nonatomic, retain) id<LibraryMovieHeaderLockupModel> viewModel;
@property (nonatomic) BOOL hideAccessories;
@property (nonatomic, weak) void /* function */ artworkView;
@property (nonatomic, weak) void /* function */ title1Field;
@property (nonatomic, weak) void /* function */ calloutField;
@property (nonatomic, weak) void /* function */ contentRatingField;
@property (nonatomic, weak) void /* function */ badges;
@property (nonatomic, weak) void /* function */ extras;
@property (nonatomic, weak) void /* function */ actionButton;
@property (nonatomic, weak) void /* function */ downloadButton;
@property (nonatomic, weak) void /* function */ expirationLine;
@property (nonatomic, readonly) unsigned long long playButtonState;
@property (nonatomic, readonly) BOOL shouldShowExtrasButton;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) double downloadProgress;
@property (nonatomic, readonly) NSAttributedString *calloutLine;
@property (nonatomic, readonly) NSString *maybeExpirationMessage;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)doActionButtonClicked:(id)a0;
- (void)doDownloadButtonClicked:(id)a0;
- (void)doExtrasButtonClicked:(id)a0;

@end
