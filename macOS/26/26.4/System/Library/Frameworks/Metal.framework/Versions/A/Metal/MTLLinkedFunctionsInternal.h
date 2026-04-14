@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; unsigned long long *functionResourceIndices; unsigned long long *privateFunctionResourceIndices; unsigned long long *binaryFunctionResourceIndices; NSDictionary *groups; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBinaryFunctionResourceIndices:(unsigned long long *)a0;
- (void)setPrivateFunctions:(id)a0;
- (void)setGroups:(id)a0;
- (id)groups;
- (BOOL)isEqual:(id)a0;
- (unsigned long long *)privateFunctionResourceIndices;
- (void)setBinaryFunctions:(id)a0;
- (id)functions;
- (id)binaryFunctions;
- (unsigned long long)hash;
- (void)setPrivateFunctionResourceIndices:(unsigned long long *)a0;
- (id)privateFunctions;
- (id)description;
- (void)setFunctions:(id)a0;
- (unsigned long long *)binaryFunctionResourceIndices;
- (void)setFunctionResourceIndices:(unsigned long long *)a0;
- (void)dealloc;
- (unsigned long long *)functionResourceIndices;

@end
