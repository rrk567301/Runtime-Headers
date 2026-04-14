@class AXFUIElement;

@interface _AXFTextPositionMarkerBased : AXFTextPosition {
    struct __AXTextMarker { } *_marker;
}

@property (retain, nonatomic) AXFUIElement *_webAreaUIElement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isValid;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (long long)indexValue;
- (id)descriptionWithoutType;
- (BOOL)isCompatibleWithPosition:(id)a0;
- (long long)offsetFromPosition:(id)a0;
- (id)positionOffsetBy:(long long)a0 withinLimit:(id)a1;
- (struct __AXTextMarker { } *)axTextMarkerValue;
- (long long)_distanceBetweenTextMarker:(struct __AXTextMarker { } *)a0 andTextMarker:(struct __AXTextMarker { } *)a1;
- (id)_initWithMarker:(struct __AXTextMarker { } *)a0 webAreaUIElement:(id)a1;
- (BOOL)isEqualToAXFTextPositionMarkerBased:(id)a0;
- (BOOL)isVisuallyEqual:(id)a0;

@end
