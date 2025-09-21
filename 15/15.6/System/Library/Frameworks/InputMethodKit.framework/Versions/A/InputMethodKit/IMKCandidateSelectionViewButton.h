@class IMKUIProperties;

@interface IMKCandidateSelectionViewButton : NSButton

@property (nonatomic, getter=isRadarButton) char radarButton;
@property (nonatomic) char mousePointerInside;
@property (nonatomic) long long trackingRectTag;
@property (retain, nonatomic) IMKUIProperties *properties;

- (void)dealloc;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsIgnored;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
