@class NSTextField, NSString, NSView, NSLayoutConstraint, GKDashboardPlayerPhotoView;

@interface GKDashboardPickerPlayerCell : NSUICollectionViewCell

@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint;
@property (retain, nonatomic) NSString *lastAppearanceName;
@property (weak) NSView *container;
@property (weak) NSTextField *subtitle;
@property (weak) NSTextField *title;
@property (weak) NSView *bottomLine;
@property (weak) NSView *monogramColorView;
@property (weak) NSView *ringView;
@property (retain, nonatomic) NSString *originalSubtitle;
@property (nonatomic) char lineVisible;
@property (nonatomic) char selectable;
@property (nonatomic) char usesClearBackground;

+ (struct CGSize { double x0; double x1; })defaultSize;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)cellBackgroundColor;
- (char)isFlipped;
- (void)setHighlightState:(long long)a0;
- (void)setSelected:(char)a0;
- (void)updateLayer;
- (void)setLineVisible:(char)a0;
- (char)canBecomeFocused;
- (void)configureWithPlayer:(id)a0 isCoreRecent:(char)a1 matchedContactName:(id)a2 onlyShowContactName:(char)a3;
- (char)lineVisible;
- (void)setAccessibilityPrefix:(id)a0;
- (id)subtitleForPlayer:(id)a0 isCoreRecent:(char)a1 matchedContactName:(id)a2 onlyShowContactName:(char)a3;
- (void)updateCellBackground;
- (void)updateLayerMask:(id)a0;

@end
