@class NSRulerMarker;

@interface NSTabWell : NSView {
    NSRulerMarker *_prototype;
    char _disabled;
}

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(char)a0;
- (char)isEnabled;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)accessibilityIsIgnored;
- (char)accessibilityIsMarkerTypeAttributeSettable;
- (char)accessibilityIsMarkerTypeDescriptionAttributeSettable;
- (id)accessibilityMarkerTypeAttribute;
- (id)accessibilityMarkerTypeDescriptionAttribute;
- (id)accessibilityRoleAttribute;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 prototypeRulerMarker:(id)a1;
- (char)isOpaque;
- (void)mouseDown:(id)a0;
- (id)prototype;
- (void)setPrototype:(id)a0;

@end
