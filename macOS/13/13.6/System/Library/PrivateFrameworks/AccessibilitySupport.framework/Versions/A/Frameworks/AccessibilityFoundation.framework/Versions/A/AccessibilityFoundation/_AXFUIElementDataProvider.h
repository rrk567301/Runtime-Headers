@class NSString;

@interface _AXFUIElementDataProvider : NSObject <NSCopying>

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic, getter=isValid) BOOL valid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)performAction:(id)a0;
- (unsigned long long)transportType;
- (id)initWithApplicationIdentifier:(id)a0;
- (id)copyActionNames;
- (BOOL)supportsAction:(id)a0;
- (id)copyParameterizedAttributeNames;
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
- (id)copyArrayForAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyAttributeNames;
- (const void *)copyAttributeValue:(id)a0;
- (id)copyDescriptionForAction:(id)a0;
- (const void *)copyParameterizedAttributeValue:(id)a0 parameter:(void *)a1;
- (unsigned long long)countForAttribute:(id)a0;
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
