@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; unsigned long long *functionResourceIndices; unsigned long long *privateFunctionResourceIndices; unsigned long long *binaryFunctionResourceIndices; NSDictionary *groups; } _private;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (void)setGroups:(id)a0;
- (id)groups;
- (void)setBinaryFunctionResourceIndices:(unsigned long long *)a0;
- (void)setPrivateFunctionResourceIndices:(unsigned long long *)a0;
- (unsigned long long *)functionResourceIndices;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long *)binaryFunctionResourceIndices;
- (void)setPrivateFunctions:(id)a0;
- (id)functions;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long *)privateFunctionResourceIndices;
- (id)description;
- (id)binaryFunctions;
- (BOOL)isEmpty;
- (void)setFunctions:(id)a0;
- (void)setBinaryFunctions:(id)a0;
- (id)privateFunctions;
- (void)setFunctionResourceIndices:(unsigned long long *)a0;
- (void)dealloc;

@end
