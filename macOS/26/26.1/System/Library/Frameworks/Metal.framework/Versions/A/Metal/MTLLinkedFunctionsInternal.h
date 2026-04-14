@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; unsigned long long *functionResourceIndices; unsigned long long *privateFunctionResourceIndices; unsigned long long *binaryFunctionResourceIndices; NSDictionary *groups; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setGroups:(id)a0;
- (id)functions;
- (id)groups;
- (void)setBinaryFunctions:(id)a0;
- (void)setPrivateFunctionResourceIndices:(unsigned long long *)a0;
- (void)setFunctions:(id)a0;
- (unsigned long long)hash;
- (void)setBinaryFunctionResourceIndices:(unsigned long long *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long *)privateFunctionResourceIndices;
- (unsigned long long *)functionResourceIndices;
- (id)description;
- (id)privateFunctions;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFunctionResourceIndices:(unsigned long long *)a0;
- (id)binaryFunctions;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (void)setPrivateFunctions:(id)a0;
- (unsigned long long *)binaryFunctionResourceIndices;

@end
