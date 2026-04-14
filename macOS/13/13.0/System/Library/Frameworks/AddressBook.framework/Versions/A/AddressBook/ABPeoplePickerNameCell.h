@interface ABPeoplePickerNameCell : NSTextFieldCell

@property (nonatomic) BOOL disableHighlight;
@property (nonatomic) int roundedEdges;
@property (nonatomic) unsigned long long iconType;

+ (void)initialize;
+ (unsigned long long)defaultFocusRingType;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringValue;
- (id)accessibilityValueAttribute;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)_drawHighlightWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expansionFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)attributedStringValue;
- (unsigned long long)focusRingType;
- (void)selectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 editor:(id)a2 delegate:(id)a3 start:(long long)a4 length:(long long)a5;
- (void)drawHighlightWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)cellLabel;
- (id)cellFont;

@end
