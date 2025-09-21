@class PCSCKKSItemModifyContext;

@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context;

- (void)start;
- (void).cxx_destruct;
- (int)addAndNotifyOnSync:(id)a0 identity:(struct _PCSIdentityData { } *)a1 attributes:(struct __CFDictionary { } *)a2 returnAttributes:(const struct __CFDictionary **)a3 complete:(id /* block */)a4;
- (void)createPCSIdentity:(id)a0 complete:(id /* block */)a1;
- (id)initWithItemModifyContext:(id)a0;
- (void)itemStored:(id)a0 complete:(id /* block */)a1;
- (void)setIdentityToCurrent:(id)a0 complete:(id /* block */)a1;
- (void)storePCSIdentity:(id)a0 identity:(struct _PCSIdentityData { } *)a1 complete:(id /* block */)a2;

@end
