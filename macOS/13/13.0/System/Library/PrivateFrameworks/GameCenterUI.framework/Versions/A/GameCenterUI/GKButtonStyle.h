@class NSColor;

@interface GKButtonStyle : NSObject

@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL clipToBounds;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) id compositingFilter;
@property (nonatomic) BOOL bordered;
@property (nonatomic) BOOL wantsLayer;

+ (id)defaultStyle;
+ (id)standardStyle;

- (void).cxx_destruct;
- (id)initWithCornerRadius:(double)a0 andBackgroundColor:(id)a1;
- (void)applyToButton:(id)a0;

@end
