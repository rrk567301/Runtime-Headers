@class NSRulerMarker;

@interface NSAccessibilityRulerMarker : NSAccessibilityMockUIElement {
    NSRulerMarker *_marker;
}

+ (id)markerWithRulerMarker:(id)a0 parent:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilitySetValueAttribute:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsMarkerTypeAttributeSettable;
- (BOOL)accessibilityIsMarkerTypeDescriptionAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityMarkerTypeAttribute;
- (id)accessibilityMarkerTypeDescriptionAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityValueAttribute;
- (id)initWithRulerMarker:(id)a0 parent:(id)a1;
- (id)marker;

@end
