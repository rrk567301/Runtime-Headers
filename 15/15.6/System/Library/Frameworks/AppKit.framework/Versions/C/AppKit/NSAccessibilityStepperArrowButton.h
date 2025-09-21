@interface NSAccessibilityStepperArrowButton : NSAccessibilityMockUIElement {
    char _increments;
}

+ (id)decrementButtonWithParent:(id)a0;
+ (id)incrementButtonWithParent:(id)a0;

- (char)isEqual:(id)a0;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (void)accessibilityPerformAction:(id)a0;
- (char)increments;
- (id)initWithIncrements:(char)a0 parent:(id)a1;

@end
