@interface _AXFUIElementDataProviderInvalid : _AXFUIElementDataProvider

- (BOOL)isValid;
- (void)performAction:(id)a0;
- (BOOL)supportsAction:(id)a0;
- (id)copyAttributeNames;
- (unsigned long long)countForAttribute:(id)a0;
- (const void *)copyAttributeValue:(id)a0;
- (void)setAttribute:(id)a0 withValue:(void *)a1;
- (const void *)copyParameterizedAttributeValue:(id)a0 parameter:(void *)a1;
- (id)copyActionNames;
- (id)copyAXFUIElementForAttribute:(id)a0;
- (id)copyArrayForAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)canSetAttributeValue:(id)a0;
- (void)setAttribute:(id)a0 withAXFUIElementValue:(id)a1;
- (id)copyAXFUIElementForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (id)copyAXFUIElementsForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (id)copyAXFUIElementsForAttribute:(id)a0;
- (void)setAttribute:(id)a0 withAXFUIElementValues:(id)a1;
- (id)copyAXFUIElementAtPoint:(struct CGPoint { double x0; double x1; })a0 includeIgnored:(BOOL)a1;
- (BOOL)supportsAttribute:(id)a0;
- (id)copyParameterizedAttributeNames;
- (id)copyDescriptionForAction:(id)a0;
- (id)copyAXFUIElementAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
