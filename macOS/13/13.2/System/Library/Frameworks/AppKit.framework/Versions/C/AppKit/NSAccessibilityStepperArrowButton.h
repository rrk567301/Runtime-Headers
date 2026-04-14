@interface NSAccessibilityStepperArrowButton : NSAccessibilityMockUIElement {
    BOOL _increments;
}

+ (id)incrementButtonWithParent:(id)a0;
+ (id)decrementButtonWithParent:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)initWithIncrements:(BOOL)a0 parent:(id)a1;
- (BOOL)increments;

@end
