@class NSString, NSMutableDictionary;

@interface _AXFUIElementDataProviderTest : _AXFUIElementDataProvider

@property (retain, nonatomic) NSMutableDictionary *_attributes;
@property (retain, nonatomic) NSMutableDictionary *_parameterizedAttributes;
@property (retain, nonatomic) NSMutableDictionary *_actions;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) int applicationProcessIdentifier;
@property (nonatomic) struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } applicationProcessSerialNumber;
@property (nonatomic) int realApplicationProcessIdentifier;
@property (nonatomic) struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } realApplicationProcessSerialNumber;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (void)performAction:(id)a0;
- (void)setAction:(id /* block */)a0 forKey:(id)a1;
- (id)applicationElement;
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
- (BOOL)supportsAction:(id)a0;
- (id)copyAXFUIElementForAttribute:(id)a0;
- (void)setAttribute:(id)a0 withAXFUIElementValue:(id)a1;
- (id)copyAXFUIElementForParameterizedAttribute:(id)a0 parameter:(void *)a1;
- (id)copyAXFUIElementsForAttribute:(id)a0;
- (void)setAttribute:(id)a0 withAXFUIElementValues:(id)a1;
- (id)copyAXFUIElementAtPoint:(struct CGPoint { double x0; double x1; })a0 includeIgnored:(BOOL)a1;
- (id)copyAXFUIElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForKey:(id)a0;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForKey:(id)a0;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1;
- (struct CGPoint { double x0; double x1; })pointForKey:(id)a0;
- (void)setPoint:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForKey:(id)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;
- (BOOL)_testIndexInParent:(unsigned long long *)a0;

@end
