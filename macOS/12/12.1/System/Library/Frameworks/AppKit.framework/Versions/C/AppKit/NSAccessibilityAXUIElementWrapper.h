@interface NSAccessibilityAXUIElementWrapper : NSObject {
    struct __AXUIElement { } *_elementRef;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)accessibilityWindowAttributeValueHelper;
- (id)accessibilityTopLevelUIElementAttributeValueHelper;
- (BOOL)accessibilityIsIgnored;
- (struct __AXUIElement { } *)AXUIElement;
- (id)initWithAXUIElement:(struct __AXUIElement { } *)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;

@end
