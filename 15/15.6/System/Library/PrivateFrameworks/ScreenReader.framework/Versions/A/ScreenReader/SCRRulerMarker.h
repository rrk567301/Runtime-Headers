@class AXFUIElement;

@interface SCRRulerMarker : SCRElement {
    AXFUIElement *_rulerUIElement;
    struct { unsigned char isHorizontal : 1; unsigned char isOrientationKnown : 1; } _srrFlags;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (float)maxValue;
- (float)minValue;
- (id)valueDescription;
- (char)isInteractive;
- (char)_isHorizontal;
- (char)increment:(float)a0;
- (id)_rulerUIElement;
- (long long)brailleLineType;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)_currentValueDescription;
- (void)_openTabStopSheet;
- (void)addItemNameToRequest:(id)a0;
- (char)decrement:(float)a0;
- (char)deleteTabStopCallbackWithRequest:(id)a0;
- (char)deleteTabStopWithRequest:(id)a0;
- (long long)groupBehavior;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(char)a2;
- (char)handleTaggedOperationWithEvent:(id)a0 request:(id)a1;
- (char)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)interactDownBigWithEvent:(id)a0 request:(id)a1;
- (char)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageupWithEvent:(id)a0 request:(id)a1;
- (char)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)isControlElement;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;

@end
