@class NSRulerMarker;

@interface NSTabWell : NSView {
    NSRulerMarker *_prototype;
    BOOL _disabled;
}

+ (void)initialize;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)isEnabled;
- (void)encodeWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsMarkerTypeAttributeSettable;
- (BOOL)accessibilityIsMarkerTypeDescriptionAttributeSettable;
- (id)accessibilityMarkerTypeAttribute;
- (id)accessibilityMarkerTypeDescriptionAttribute;
- (id)accessibilityRoleAttribute;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 prototypeRulerMarker:(id)a1;
- (id)prototype;
- (void)setPrototype:(id)a0;

@end
