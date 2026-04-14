@class NSRulerMarker;

@interface NSAccessibilityRulerMarker : NSAccessibilityMockUIElement {
    NSRulerMarker *_marker;
}

+ (id)markerWithRulerMarker:(id)a0 parent:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)accessibilityAttributeNames;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilitySetValueAttribute:(id)a0;
- (id)marker;
- (id)initWithRulerMarker:(id)a0 parent:(id)a1;
- (id)accessibilityMarkerTypeAttribute;
- (BOOL)accessibilityIsMarkerTypeAttributeSettable;
- (id)accessibilityMarkerTypeDescriptionAttribute;
- (BOOL)accessibilityIsMarkerTypeDescriptionAttributeSettable;

@end
