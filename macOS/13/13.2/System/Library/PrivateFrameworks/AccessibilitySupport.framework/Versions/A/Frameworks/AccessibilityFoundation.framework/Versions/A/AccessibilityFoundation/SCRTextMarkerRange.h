@class SCRTextMarker;

@interface SCRTextMarkerRange : NSObject {
    SCRTextMarker *_startMarker;
    SCRTextMarker *_endMarker;
}

+ (id)markerRangeWithNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)markerRangeWithStartMarker:(id)a0 endMarker:(id)a1;
+ (id)markerRangeWithMarker:(id)a0 marker:(id)a1 uiElement:(id)a2;
+ (id)markerRangeWithAXTextMarkerRange:(struct __AXTextMarkerRange { } *)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)startMarker;
- (id)endMarker;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRange;
- (id)debugDescriptionWithUIElement:(id)a0;
- (id)initWithStartMarker:(id)a0 endMarker:(id)a1;
- (const struct __AXTextMarkerRange { } *)axTextMarkerRange;
- (BOOL)isCompatibleWithRange:(id)a0;
- (BOOL)containsMarker:(id)a0 forUIElement:(id)a1;
- (BOOL)containsRange:(id)a0 forUIElement:(id)a1;
- (BOOL)intersectsTextMarkerRange:(id)a0 uiElement:(id)a1;
- (BOOL)isVisuallyEquivalentToTextMarkerRange:(id)a0 uiElement:(id)a1;
- (id)relativeComplementWithTextMarkerRange:(id)a0 uiElement:(id)a1;

@end
