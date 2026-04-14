@class NSString;

@interface _AXFUIElementDataProvider : NSObject <NSCopying>

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic, getter=isValid) BOOL valid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)performAction:(id)a0;
- (unsigned long long)transportType;
- (BOOL)supportsAction:(id)a0;
- (BOOL)isIPCDataProvider;
- (id)copyAttributeNames;
- (unsigned long long)countForAttribute:(id)a0;
- (const void *)copyAttributeValue:(id)a0;
- (int)applicationProcessIdentifier;
- (struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })applicationProcessSerialNumber;
- (id)applicationElement;
- (int)realApplicationProcessIdentifier;
- (struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })realApplicationProcessSerialNumber;
- (id)transportData;
- (void)setAttribute:(id)a0 withValue:(void *)a1;
- (const void *)copyParameterizedAttributeValue:(id)a0 parameter:(void *)a1;
- (id)copyActionNames;
- (BOOL)isiOSPlatformElement;
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
- (id)initWithApplicationIdentifier:(id)a0;
- (id)convertOutgoingValueForAttribute:(id)a0 value:(id)a1;
- (id)outgoingRepresentation;

@end
