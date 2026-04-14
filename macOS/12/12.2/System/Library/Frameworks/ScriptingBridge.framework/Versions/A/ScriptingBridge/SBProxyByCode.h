@interface SBProxyByCode : SBProxy {
    unsigned int _codeToCreate;
}

+ (id)allocWithCode:(unsigned int)a0;

- (id)description;
- (id)initWithContext:(id)a0 specifier:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1;
- (id)initWithCode:(unsigned int)a0 properties:(id)a1 data:(id)a2;
- (id)initWithElementCode:(unsigned int)a0 properties:(id)a1 data:(id)a2;
- (id)initWithData:(id)a0 andProperties:(id)a1;
- (unsigned int)codeInContext:(id)a0;

@end
