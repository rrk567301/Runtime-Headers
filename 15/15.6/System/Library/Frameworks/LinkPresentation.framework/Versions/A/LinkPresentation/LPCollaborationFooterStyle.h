@class LPPadding, LPPointUnit, LPTextViewStyle, NSColor;

@interface LPCollaborationFooterStyle : NSObject

@property (readonly, retain, nonatomic) LPPadding *margin;
@property (readonly, retain, nonatomic) LPPadding *separatorMargin;
@property (readonly, retain, nonatomic) LPPadding *padding;
@property (retain, nonatomic) LPPointUnit *indicatorSpacing;
@property (retain, nonatomic) LPPointUnit *cornerRadius;
@property (readonly, nonatomic) LPTextViewStyle *options;
@property (readonly, nonatomic) LPTextViewStyle *handle;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) char showSeparator;
@property (nonatomic) char useFullWidth;
@property (nonatomic) char useInlineIndicator;
@property (nonatomic) char useFullWidthDuringSizing;
@property (nonatomic) char ignoreSafeAreaInset;
@property (nonatomic) char useSafeAreaInsetWithPadding;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0 sizeClass:(unsigned long long)a1 fontScalingFactor:(double)a2;

@end
