@class NSString;

@interface AMPDesktopUI.TracklistFooterLockup : NSTableCellView {
    void /* unknown type, empty encoding */ kIndentBarWidth;
    void /* unknown type, empty encoding */ kIndentBarVisibleSpacing;
    void /* unknown type, empty encoding */ kIndentBarHiddenSpacing;
    void /* unknown type, empty encoding */ kSummaryLineBaselineOffset;
    void /* unknown type, empty encoding */ kNextLineBaselineOffset;
    void /* unknown type, empty encoding */ kLastLineBaselineOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_releaseDateFormatter;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ summaryLine;
@property (nonatomic, weak) void /* unknown type, empty encoding */ releaseDateLine;
@property (nonatomic, weak) void /* unknown type, empty encoding */ copyrightLine;
@property (nonatomic, weak) void /* unknown type, empty encoding */ indentBar;
@property (nonatomic, weak) void /* unknown type, empty encoding */ badgeContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ indentSpacingConstraint;
@property (nonatomic, readonly) NSString *summaryString;
@property (nonatomic, readonly) NSString *releasedString;
@property (nonatomic, readonly) BOOL indentBarVisible;
@property (nonatomic) BOOL indentBarSetting;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)keyPathsForValuesInvalidatingConstraints;
+ (id)lockup;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;

@end
