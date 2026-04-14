@class NSRulerMarker;

@interface NSTabWell : NSView {
    NSRulerMarker *_prototype;
    BOOL _disabled;
}

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPrototype:(id)a0;
- (id)prototype;
- (id)accessibilityMarkerTypeAttribute;
- (BOOL)accessibilityIsMarkerTypeAttributeSettable;
- (id)accessibilityMarkerTypeDescriptionAttribute;
- (BOOL)accessibilityIsMarkerTypeDescriptionAttributeSettable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 prototypeRulerMarker:(id)a1;

@end
