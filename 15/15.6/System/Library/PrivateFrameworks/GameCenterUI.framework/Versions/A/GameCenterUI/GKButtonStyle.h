@class NSColor;

@interface GKButtonStyle : NSObject

@property (nonatomic) double cornerRadius;
@property (nonatomic) char clipToBounds;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) id compositingFilter;
@property (nonatomic) char bordered;
@property (nonatomic) char wantsLayer;

+ (id)defaultStyle;
+ (id)standardStyle;

- (void).cxx_destruct;
- (void)applyToButton:(id)a0;
- (id)initWithCornerRadius:(double)a0 andBackgroundColor:(id)a1;

@end
