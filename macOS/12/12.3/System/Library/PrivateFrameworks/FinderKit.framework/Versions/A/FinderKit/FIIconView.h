@class FI_IconView, NSString, NSImage, NSColor;

@interface FIIconView : NSView {
    FI_IconView *_iconView;
}

@property (getter=isTitleEnabled) BOOL titleEnabled;
@property long long style;
@property struct CGSize { double x0; double x1; } iconImageSize;
@property (copy, nonatomic) NSImage *iconImage;
@property (copy) NSString *titleStr;
@property double titleFontSize;
@property (copy) NSColor *titleFontColor;
@property (getter=isTitleOnBottom) BOOL titleOnBottom;
@property (copy) NSString *subtitleStr;
@property (copy) NSColor *subtitleFontColor;
@property (getter=isSubtitleEnabled) BOOL subtitleEnabled;
@property unsigned long long gridSpacing;
@property (getter=isSelected) BOOL selected;
@property (getter=isDropTarget) BOOL dropTarget;
@property BOOL useActiveAppearance;

+ (struct CGSize { double x0; double x1; })idealSizeForTitleFontSize:(double)a0 iconImageSize:(struct CGSize { double x0; double x1; })a1 gridSpacing:(unsigned long long)a2 isTitleOnBottom:(BOOL)a3 isTitleEnabled:(BOOL)a4 isSubtitleEnabled:(BOOL)a5;
+ (struct CGSize { double x0; double x1; })idealSizeForTitleFontSize:(double)a0 iconImageSize:(struct CGSize { double x0; double x1; })a1 gridSpacing:(unsigned long long)a2 isTitleOnBottom:(BOOL)a3 isSubtitleEnabled:(BOOL)a4;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)style;
- (void)setStyle:(long long)a0;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (void)setSelected:(BOOL)a0;
- (void)aboutToTearDown;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (void)initCommon;
- (id)iconImage;
- (void)setIconImage:(id)a0;
- (double)titleFontSize;
- (void)setTitleFontSize:(double)a0;
- (unsigned long long)gridSpacing;
- (void)setGridSpacing:(unsigned long long)a0;
- (void)setUseActiveAppearance:(BOOL)a0;
- (void)setTitleStr:(id)a0;
- (id)hitTestInIcon:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTestInText:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTestInIconOrText:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)useActiveAppearance;
- (void)setTitleFontColor:(id)a0;
- (void)setSubtitleEnabled:(BOOL)a0;
- (void)setSubtitleFontColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconFrame;
- (id)titleStr;
- (void)setTitleEnabled:(BOOL)a0;
- (void)setDropTarget:(BOOL)a0;
- (id)titleFontColor;
- (id)subtitleFontColor;
- (id)subtitleStr;
- (void)setSubtitleStr:(id)a0;
- (id)dragFlockingImageComponents;

@end
