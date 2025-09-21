@class AXFUIElement;

@interface _AXFTextPositionMarkerBased : AXFTextPosition {
    struct __AXTextMarker { } *_marker;
}

@property (retain, nonatomic) AXFUIElement *_webAreaUIElement;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (long long)type;
- (long long)indexValue;
- (long long)_distanceBetweenTextMarker:(struct __AXTextMarker { } *)a0 andTextMarker:(struct __AXTextMarker { } *)a1;
- (id)_initWithMarker:(struct __AXTextMarker { } *)a0 webAreaUIElement:(id)a1;
- (struct __AXTextMarker { } *)axTextMarkerValue;
- (id)descriptionWithoutType;
- (char)isCompatibleWithPosition:(id)a0;
- (char)isEqualToAXFTextPositionMarkerBased:(id)a0;
- (char)isVisuallyEqual:(id)a0;
- (long long)offsetFromPosition:(id)a0;
- (id)positionOffsetBy:(long long)a0 withinLimit:(id)a1;

@end
