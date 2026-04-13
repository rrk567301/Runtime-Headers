@class SCRUIElement;

@interface SCRIncrementor : SCRElement {
    SCRUIElement *_incrementUIElement;
    SCRUIElement *_decrementUIElement;
}

- (void).cxx_destruct;
- (id)maxValue;
- (id)minValue;
- (id)valueDescription;
- (BOOL)isInteractive;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)allowBuildChildren;
- (long long)groupBehavior;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)isControlElement;
- (BOOL)canHandleValueChange;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (long long)brailleLineType;
- (id)_incrementUIElement;
- (id)_decrementUIElement;

@end
