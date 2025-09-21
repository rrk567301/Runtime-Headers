@class NSImageView, NSTextField;

@interface OBBulletIconTextView : NSView

@property (retain, nonatomic) NSImageView *iconView;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) NSTextField *textLabel;
@property (nonatomic) double padding;
@property (readonly, nonatomic) double baselineFromBoundsTop;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 text:(id)a2;

@end
