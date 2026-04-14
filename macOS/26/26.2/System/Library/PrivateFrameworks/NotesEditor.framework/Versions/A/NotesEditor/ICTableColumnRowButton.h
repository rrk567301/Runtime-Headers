@class NSTrackingArea, NSArray, NSButton;

@interface ICTableColumnRowButton : NSButton

@property (retain, nonatomic) NSTrackingArea *mouseTrackingArea;
@property (retain, nonatomic) NSArray *columnOrRowIdentifiers;
@property (readonly, nonatomic) BOOL isColumn;
@property (readonly, nonatomic) BOOL isLTR;
@property (readonly, nonatomic) NSButton *disclosureButton;

+ (BOOL)clipsToBounds;

- (void)mouseEntered:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)mouseExited:(id)a0;
- (void)layout;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (void)updateTrackingAreas;
- (void)setState:(long long)a0;
- (void)cursorUpdate:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseMoved:(id)a0;
- (id)initAsColumn:(BOOL)a0 isLeftToRight:(BOOL)a1;
- (id)tableAXController;
- (void)updateAccentColor;

@end
