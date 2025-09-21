@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; unsigned long long *functionResourceIndices; unsigned long long *privateFunctionResourceIndices; unsigned long long *binaryFunctionResourceIndices; NSDictionary *groups; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setGroups:(id)a0;
- (id)groups;
- (unsigned long long *)binaryFunctionResourceIndices;
- (void)setFunctions:(id)a0;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setFunctionResourceIndices:(unsigned long long *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (void)setPrivateFunctionResourceIndices:(unsigned long long *)a0;
- (void)setBinaryFunctions:(id)a0;
- (id)privateFunctions;
- (id)binaryFunctions;
- (id)functions;
- (unsigned long long *)privateFunctionResourceIndices;
- (void)setPrivateFunctions:(id)a0;
- (id)description;
- (void)setBinaryFunctionResourceIndices:(unsigned long long *)a0;
- (unsigned long long *)functionResourceIndices;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
