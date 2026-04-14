@interface IKGradientImageButton : NSButton

@property int highlightSides;
@property BOOL showsState;

+ (Class)cellClass;

- (int)gradientStyle;
- (void)setGradientStyle:(int)a0;
- (int)borderSides;
- (void)setBorderSides:(int)a0;

@end
