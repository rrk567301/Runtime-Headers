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
@property (getter=isTitleOnBottom) char titleOnBottom;
@property (copy) NSString *subtitleStr;
@property (copy) NSColor *subtitleFontColor;
@property (getter=isSubtitleEnabled) char subtitleEnabled;
@property unsigned long long gridSpacing;
@property (getter=isSelected) char selected;
@property (getter=isDropTarget) char dropTarget;
@property char useActiveAppearance;

+ (struct CGSize { double x0; double x1; })idealSizeForTitleFontSize:(double)a0 iconImageSize:(struct CGSize { double x0; double x1; })a1 gridSpacing:(unsigned long long)a2 isTitleOnBottom:(char)a3 isSubtitleEnabled:(char)a4;
+ (struct CGSize { double x0; double x1; })idealSizeForTitleFontSize:(double)a0 iconImageSize:(struct CGSize { double x0; double x1; })a1 gridSpacing:(unsigned long long)a2 isTitleOnBottom:(char)a3 isTitleEnabled:(char)a4 isSubtitleEnabled:(char)a5;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (char)accessibilityIsIgnored;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (char)wantsUpdateLayer;
- (void)aboutToTearDown;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (void)initCommon;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconFrame;
- (id)dragFlockingImageComponents;
- (id)hitTestInIcon:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTestInIconOrText:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTestInText:(struct CGPoint { double x0; double x1; })a0;

@end
