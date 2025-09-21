@class GKTextStyle;

@interface GKTextField : NSTextField {
    GKTextStyle *_baseStyle;
}

@property (retain, nonatomic) GKTextStyle *appliedStyle;

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)applyTextStyle:(id)a0;

@end
