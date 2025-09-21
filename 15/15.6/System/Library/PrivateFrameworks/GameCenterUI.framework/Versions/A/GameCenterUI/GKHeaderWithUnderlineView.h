@class NSImageView, NSMutableDictionary, NSView, NSArray;

@interface GKHeaderWithUnderlineView : NSUICollectionReusableView

@property (nonatomic) char isPinned;
@property (retain, nonatomic) NSView *pinnedBackdropView;
@property (nonatomic) char didSetupConstraints;
@property (retain, nonatomic) NSView *underlineView;
@property (retain, nonatomic) NSImageView *shadowView;
@property (nonatomic) char underlineHasRightMargin;
@property (retain, nonatomic) NSMutableDictionary *metrics;
@property (retain, nonatomic) NSArray *gutterConstraints;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

+ (void)initialize;
+ (char)requiresConstraintBasedLayout;
+ (id)macMetrics;
+ (id)padMetrics;
+ (id)phoneMetrics;

- (void).cxx_destruct;
- (char)allowsVibrancy;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (char)drawsUnderline;
- (void)establishConstraints;
- (void)pinningStateChangedTo:(char)a0;
- (void)updateGutterConstraints;

@end
