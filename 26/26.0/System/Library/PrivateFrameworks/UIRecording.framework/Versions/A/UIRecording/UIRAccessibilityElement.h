@class NSString;

@interface UIRAccessibilityElement : NSObject {
    struct __AXUIElement { } *_ref;
    NSString *_name;
}

+ (id)accessibilityElementWithEventRecordsStack:(id)a0 forProcess:(id)a1 error:(id *)a2;

- (id)parent;
- (void)setName:(id)a0;
- (id)title;
- (id)valueForAttribute:(id)a0;
- (id)name;
- (struct CGPoint { double x0; double x1; })position;
- (id)children;
- (struct CGSize { double x0; double x1; })size;
- (id)attributeNames;
- (struct __AXUIElement { } *)ref;
- (void)setRef:(struct __AXUIElement { } *)a0;
- (id)valuesForAttribute:(id)a0;
- (id)actionNames;
- (id)descriptionForAction:(id)a0;
- (struct CGPoint { double x0; double x1; })centerPosition;
- (id)childMatchingRecord:(id)a0;

@end
