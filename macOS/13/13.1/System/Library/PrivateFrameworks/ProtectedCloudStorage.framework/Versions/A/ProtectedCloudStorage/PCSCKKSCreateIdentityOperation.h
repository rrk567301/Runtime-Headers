@class PCSCKKSItemModifyContext;

@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context;

- (void).cxx_destruct;
- (void)start;
- (id)initWithItemModifyContext:(id)a0;
- (void)createPCSIdentity;
- (void)storePCSIdentity:(struct _PCSIdentityData { } *)a0;
- (int)addAndNotifyOnSync:(struct _PCSIdentityData { } *)a0 attributes:(struct __CFDictionary { } *)a1 returnAttributes:(const struct __CFDictionary **)a2 complete:(id /* block */)a3;
- (void)setIdentityToCurrent;
- (void)itemStored:(id)a0;

@end
