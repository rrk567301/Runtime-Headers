@class NSShadow;

@interface IKGradientImageButtonCell : NSButtonCell

@property (nonatomic) int gradientStyle;
@property int borderSides;
@property int highlightSides;
@property (copy) NSShadow *imageShadow;
@property (nonatomic) char showsState;
@property char suppressLeftBorderForTabStyles;
@property char enableGradientStylBorderSuppression;
@property char useButtonImageCenteringHack;
@property char usedAsRadioButton;
@property char drawBackground;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setTitle:(id)a0;
- (void)drawImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;
- (void)IK_commonInitWithGradientStyle:(int)a0 borderSides:(int)a1;
- (void)_setGradientStyle:(int)a0;
- (id)initWithGradientStyle:(int)a0 borderSides:(int)a1;

@end
