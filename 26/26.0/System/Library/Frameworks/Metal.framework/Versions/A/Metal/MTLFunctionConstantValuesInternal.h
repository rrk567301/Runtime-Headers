@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues <MTLFunctionConstantSPI> {
    void *_constantStorage;
}

- (id)newIndexedConstantArray;
- (void)reset;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newConstantScriptForFunction:(id)a0 name:(id)a1 specializedName:(id)a2 errorMessage:(id *)a3;
- (id)init;
- (void *)serializedConstantDataForFunction:(id)a0 dataSize:(unsigned long long *)a1 errorMessage:(id *)a2;
- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 withName:(id)a2;
- (id)description;
- (id)newNamedConstantArray;
- (const void *)constantValueWithFunctionConstant:(id)a0;
- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)hash;
- (void)setConstantValues:(const void *)a0 type:(unsigned long long)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)isEqual:(id)a0;

@end
