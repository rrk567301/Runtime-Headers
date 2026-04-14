@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues <MTLFunctionConstantSPI> {
    void *_constantStorage;
}

- (id)newNamedConstantArray;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void *)serializedConstantDataForFunction:(id)a0 dataSize:(unsigned long long *)a1 errorMessage:(id *)a2;
- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (const void *)constantValueWithFunctionConstant:(id)a0;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 withName:(id)a2;
- (id)description;
- (id)newConstantScriptForFunction:(id)a0 name:(id)a1 specializedName:(id)a2 errorMessage:(id *)a3;
- (id)newIndexedConstantArray;
- (void)setConstantValues:(const void *)a0 type:(unsigned long long)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)dealloc;

@end
