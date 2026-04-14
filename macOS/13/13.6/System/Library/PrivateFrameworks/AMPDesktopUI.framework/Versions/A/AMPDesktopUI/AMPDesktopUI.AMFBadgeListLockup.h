@class NSString, NSLayoutYAxisAnchor;

@interface AMPDesktopUI.AMFBadgeListLockup : NSTableCellView {
    void /* unknown type, empty encoding */ kBadgeSize;
    void /* unknown type, empty encoding */ kBadgeSpacing;
    void /* unknown type, empty encoding */ badgeContainer;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ labelXConstraint;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic) void /* unknown type, empty encoding */ rolledBadgeIndex;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *badgeCenterAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *badgeBottomAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *labelBaselineAnchor;
@property (nonatomic, readonly) NSString *labelText;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)keyPathsForValuesInvalidatingConstraints;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)updateConstraints;

@end
