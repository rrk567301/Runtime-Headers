@class LPPadding, LPPointUnit, NSFont, NSColor;

@interface LPButtonStyle : NSObject

@property (retain, nonatomic) NSColor *foregroundColor;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) LPPadding *padding;
@property (retain, nonatomic) LPPadding *margin;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (retain, nonatomic) LPPointUnit *minimumHeight;
@property (retain, nonatomic) LPPointUnit *height;
@property (nonatomic) BOOL ignoresInvertColors;

+ (id)systemPillButtonStyleForPlatform:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
