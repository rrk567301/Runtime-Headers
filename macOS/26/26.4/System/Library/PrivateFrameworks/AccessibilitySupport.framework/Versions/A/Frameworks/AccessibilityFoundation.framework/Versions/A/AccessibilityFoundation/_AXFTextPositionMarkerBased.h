@class AXFUIElement;

@interface _AXFTextPositionMarkerBased : AXFTextPosition {
    struct __AXTextMarker { } *_marker;
}

@property (retain, nonatomic) AXFUIElement *_webAreaUIElement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (long long)type;
- (id)description;
- (void)dealloc;
- (long long)indexValue;
- (long long)_distanceBetweenTextMarker:(struct __AXTextMarker { } *)a0 andTextMarker:(struct __AXTextMarker { } *)a1;
- (id)_initWithMarker:(struct __AXTextMarker { } *)a0 webAreaUIElement:(id)a1;
- (struct __AXTextMarker { } *)axTextMarkerValue;
- (id)descriptionWithoutType;
- (BOOL)isCompatibleWithPosition:(id)a0;
- (BOOL)isEqualToAXFTextPositionMarkerBased:(id)a0;
- (BOOL)isVisuallyEqual:(id)a0;
- (long long)offsetFromPosition:(id)a0;
- (id)positionOffsetBy:(long long)a0 withinLimit:(id)a1;

@end
