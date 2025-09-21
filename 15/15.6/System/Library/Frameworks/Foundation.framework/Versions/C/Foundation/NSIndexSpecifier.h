@interface NSIndexSpecifier : NSScriptObjectSpecifier {
    long long _index;
}

@property long long index;

+ (id)_containerAtIndex:(unsigned long long *)a0 traversingBackward:(char)a1 inContainerTree:(id)a2 ofDepth:(unsigned long long)a3;
+ (char)_fromContainerInfo:(const struct { id x0; id x1; char x2; char x3; } *)a0 andKeyCode:(unsigned int)a1 getAdjustedContainerInfo:(struct { id x0; id x1; char x2; char x3; } *)a2 andKey:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2 index:(long long)a3;
- (id)_initFromRecord:(id)a0;
- (id)_moreCompleteVariantOfTypeDescription:(id)a0;
- (char)_putKeyFormAndDataInRecord:(id)a0;
- (id)_simpleDescription;
- (unsigned long long)_specifiedIndexOfObjectInContainer:(id)a0;
- (unsigned long long)_specifiedObjectTreeDepth;
- (char)_specifiesCollection;
- (char)_specifiesMultipleIndexedObjectsPerContainer;
- (char)_specifiesSingleIndexedObjectPerContainer;
- (id)_typeDescription;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2;
- (id)keyClassDescription;
- (id)objectsByEvaluatingWithContainers:(id)a0;

@end
