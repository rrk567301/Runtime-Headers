@class NSMutableSet;

@interface _AXFUIElementDataProviderIPC : _AXFUIElementDataProvider {
    struct __AXUIElement { } *_elementRef;
}

@property (retain, nonatomic) NSMutableSet *_supportedAttributes;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)performAction:(id)a0;
- (unsigned long long)transportType;
- (id)initWithElementRef:(struct __AXUIElement { } *)a0 applicationIdentifier:(id)a1;
- (int)applicationProcessIdentifier;
- (struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })applicationProcessSerialNumber;
- (id)applicationElement;
- (int)realApplicationProcessIdentifier;
- (struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })realApplicationProcessSerialNumber;
- (const struct __AXUIElement { } *)elementRef;
- (id)copyAttributeNames;
- (id)copyParameterizedAttributeNames;
- (BOOL)supportsAttribute:(id)a0;
- (const void *)copyAttributeValue:(id)a0;
- (const void *)copyParameterizedAttributeValue:(id)a0 parameter:(void *)a1;
- (unsigned long long)countForAttribute:(id)a0;
- (id)copyArrayForAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)canSetAttributeValue:(id)a0;
- (void)setAttribute:(id)a0 withValue:(void *)a1;
- (id)copyActionNames;
- (id)copyDescriptionForAction:(id)a0;
- (id)copyAXFUIElementForAttribute:(id)a0;
- (void)setAttribute:(id)a0 withAXFUIElementValue:(id)a1;
- (id)copyAXFUIElementForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (id)copyAXFUIElementsForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (id)copyAXFUIElementsForAttribute:(id)a0;
- (void)setAttribute:(id)a0 withAXFUIElementValues:(id)a1;
- (id)copyAXFUIElementAtPoint:(struct CGPoint { double x0; double x1; })a0 includeIgnored:(BOOL)a1;
- (id)copyAXFUIElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithTransportData:(id)a0 applicationIdentifier:(id)a1;
- (const struct __AXUIElement { } *)elementRefForObserver;
- (struct __AXUIElement { } *)_elementForIsEqualAndHash;
- (BOOL)_checkError:(int)a0;
- (struct __AXUIElement { } *)copyAXUIElementRefForAttribute:(id)a0;
- (struct __AXUIElement { } *)copyAXUIElementRefForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (const struct __AXUIElement { } *)copyAXUIElementRefAtPoint:(struct CGPoint { double x0; double x1; })a0 includeIgnored:(BOOL)a1;
- (id)transportData;
- (BOOL)isiOSPlatformElement;
- (id)_parentProviderWithDifferentPid:(id)a0;
- (BOOL)isIPCDataProvider;
- (id)outgoingRepresentation;
- (id)convertOutgoingValueForAttribute:(id)a0 value:(id)a1;
- (id)_convertOutgoingValue:(id)a0;

@end
