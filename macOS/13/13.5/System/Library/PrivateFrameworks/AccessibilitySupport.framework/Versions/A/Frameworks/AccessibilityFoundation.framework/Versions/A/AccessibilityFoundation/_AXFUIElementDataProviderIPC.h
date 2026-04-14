@class NSMutableSet;

@interface _AXFUIElementDataProviderIPC : _AXFUIElementDataProvider {
    struct __AXUIElement { } *_elementRef;
}

@property (retain, nonatomic) NSMutableSet *_supportedAttributes;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)performAction:(id)a0;
- (unsigned long long)transportType;
- (id)copyActionNames;
- (struct __AXUIElement { } *)copyAXUIElementRefForAttribute:(id)a0;
- (id)copyParameterizedAttributeNames;
- (BOOL)_checkError:(int)a0;
- (id)_convertOutgoingValue:(id)a0;
- (struct __AXUIElement { } *)_elementForIsEqualAndHash;
- (id)_parentProviderWithDifferentPid:(id)a0;
- (id)applicationElement;
- (int)applicationProcessIdentifier;
- (struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })applicationProcessSerialNumber;
- (BOOL)canSetAttributeValue:(id)a0;
- (id)convertOutgoingValueForAttribute:(id)a0 value:(id)a1;
- (id)copyAXFUIElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)copyAXFUIElementAtPoint:(struct CGPoint { double x0; double x1; })a0 includeIgnored:(BOOL)a1;
- (id)copyAXFUIElementForAttribute:(id)a0;
- (id)copyAXFUIElementForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (id)copyAXFUIElementsForAttribute:(id)a0;
- (id)copyAXFUIElementsForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (const struct __AXUIElement { } *)copyAXUIElementRefAtPoint:(struct CGPoint { double x0; double x1; })a0 includeIgnored:(BOOL)a1;
- (struct __AXUIElement { } *)copyAXUIElementRefForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (id)copyArrayForAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyAttributeNames;
- (const void *)copyAttributeValue:(id)a0;
- (id)copyDescriptionForAction:(id)a0;
- (const void *)copyParameterizedAttributeValue:(id)a0 parameter:(void *)a1;
- (unsigned long long)countForAttribute:(id)a0;
- (const struct __AXUIElement { } *)elementRef;
- (const struct __AXUIElement { } *)elementRefForObserver;
- (id)initWithElementRef:(struct __AXUIElement { } *)a0 applicationIdentifier:(id)a1;
- (id)initWithTransportData:(id)a0 applicationIdentifier:(id)a1;
- (BOOL)isIPCDataProvider;
- (BOOL)isiOSPlatformElement;
- (id)outgoingRepresentation;
- (int)realApplicationProcessIdentifier;
- (struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })realApplicationProcessSerialNumber;
- (void)setAttribute:(id)a0 withAXFUIElementValue:(id)a1;
- (void)setAttribute:(id)a0 withAXFUIElementValues:(id)a1;
- (void)setAttribute:(id)a0 withValue:(void *)a1;
- (BOOL)supportsAttribute:(id)a0;
- (id)transportData;

@end
