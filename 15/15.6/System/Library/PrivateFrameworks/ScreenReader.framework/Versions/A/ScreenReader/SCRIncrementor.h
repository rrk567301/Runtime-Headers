@class AXFUIElement;

@interface SCRIncrementor : SCRElement {
    AXFUIElement *_incrementUIElement;
    AXFUIElement *_decrementUIElement;
}

- (void).cxx_destruct;
- (id)maxValue;
- (id)minValue;
- (id)valueDescription;
- (char)isInteractive;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (long long)brailleLineType;
- (id)_decrementUIElement;
- (id)_incrementUIElement;
- (char)allowBuildChildren;
- (char)canHandleValueChange;
- (long long)groupBehavior;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)isControlElement;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;

@end
