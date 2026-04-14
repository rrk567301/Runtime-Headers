@interface _AXFUIElementDataProviderInvalid : _AXFUIElementDataProvider

- (BOOL)isValid;
- (void)performAction:(id)a0;
- (id)copyActionNames;
- (BOOL)supportsAction:(id)a0;
- (id)copyParameterizedAttributeNames;
- (BOOL)canSetAttributeValue:(id)a0;
- (id)copyAXFUIElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)copyAXFUIElementAtPoint:(struct CGPoint { double x0; double x1; })a0 includeIgnored:(BOOL)a1;
- (id)copyAXFUIElementForAttribute:(id)a0;
- (id)copyAXFUIElementForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (id)copyAXFUIElementsForAttribute:(id)a0;
- (id)copyAXFUIElementsForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (id)copyArrayForAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyAttributeNames;
- (const void *)copyAttributeValue:(id)a0;
- (id)copyDescriptionForAction:(id)a0;
- (const void *)copyParameterizedAttributeValue:(id)a0 parameter:(void *)a1;
- (unsigned long long)countForAttribute:(id)a0;
- (void)setAttribute:(id)a0 withAXFUIElementValue:(id)a1;
- (void)setAttribute:(id)a0 withAXFUIElementValues:(id)a1;
- (void)setAttribute:(id)a0 withValue:(void *)a1;
- (BOOL)supportsAttribute:(id)a0;

@end
