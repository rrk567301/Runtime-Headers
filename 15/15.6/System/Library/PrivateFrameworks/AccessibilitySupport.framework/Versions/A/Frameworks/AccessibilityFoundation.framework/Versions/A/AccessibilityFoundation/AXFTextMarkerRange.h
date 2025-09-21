@class AXFTextMarker;

@interface AXFTextMarkerRange : NSObject {
    AXFTextMarker *_startMarker;
    AXFTextMarker *_endMarker;
}

+ (id)markerRangeWithNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)markerRangeWithStartMarker:(id)a0 endMarker:(id)a1;
+ (id)markerRangeWithAXTextMarkerRange:(struct __AXTextMarkerRange { } *)a0;
+ (id)markerRangeWithMarker:(id)a0 marker:(id)a1 uiElement:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEmpty;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRange;
- (id)endMarker;
- (id)startMarker;
- (struct __AXTextMarkerRange { } *)axTextMarkerRange;
- (char)containsMarker:(id)a0 forUIElement:(id)a1;
- (char)containsRange:(id)a0 forUIElement:(id)a1;
- (id)debugDescriptionWithUIElement:(id)a0;
- (id)initWithStartMarker:(id)a0 endMarker:(id)a1;
- (char)intersectsTextMarkerRange:(id)a0 uiElement:(id)a1;
- (char)isCompatibleWithRange:(id)a0;
- (char)isVisuallyEquivalentToTextMarkerRange:(id)a0 uiElement:(id)a1;
- (unsigned long long)lengthWithUIElement:(id)a0;
- (id)relativeComplementWithTextMarkerRange:(id)a0 uiElement:(id)a1;

@end
