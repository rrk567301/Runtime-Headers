@interface NSAccessibilityAXUIElementWrapper : NSObject {
    struct __AXUIElement { } *_elementRef;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (struct __AXUIElement { } *)AXUIElement;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityTopLevelUIElementAttributeValueHelper;
- (id)accessibilityWindowAttributeValueHelper;
- (id)initWithAXUIElement:(struct __AXUIElement { } *)a0;

@end
