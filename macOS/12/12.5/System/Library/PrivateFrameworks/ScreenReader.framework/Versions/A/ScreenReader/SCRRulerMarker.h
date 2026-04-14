@class SCRUIElement;

@interface SCRRulerMarker : SCRElement {
    SCRUIElement *_rulerUIElement;
    struct { unsigned char isHorizontal : 1; unsigned char isOrientationKnown : 1; } _srrFlags;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (float)minValue;
- (float)maxValue;
- (BOOL)_isHorizontal;
- (id)valueDescription;
- (BOOL)isInteractive;
- (BOOL)increment:(float)a0;
- (void)addItemNameToRequest:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)handleTaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (long long)groupBehavior;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)isControlElement;
- (long long)brailleLineType;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (id)_rulerUIElement;
- (void)_openTabStopSheet;
- (BOOL)decrement:(float)a0;
- (id)_currentValueDescription;
- (BOOL)deleteTabStopWithRequest:(id)a0;
- (BOOL)deleteTabStopCallbackWithRequest:(id)a0;
- (BOOL)interactPageupWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownBigWithEvent:(id)a0 request:(id)a1;

@end
