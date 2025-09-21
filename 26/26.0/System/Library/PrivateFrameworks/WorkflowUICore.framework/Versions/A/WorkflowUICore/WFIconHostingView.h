@class WFIcon;

@interface WFIconHostingView : NSView {
    void /* unknown type, empty encoding */ hostingView;
}

@property (nonatomic, retain) WFIcon *icon;
@property (nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (nonatomic) BOOL useAccentColor;

+ (id)renderIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
