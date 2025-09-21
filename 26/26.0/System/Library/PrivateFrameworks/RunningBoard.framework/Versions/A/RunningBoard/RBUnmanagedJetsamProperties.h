@interface RBUnmanagedJetsamProperties : RBJetsamProperties

+ (id)new;

- (BOOL)isValid;
- (id)init;
- (int)memoryLimitForCategory:(id)a0 strength:(unsigned char *)a1;

@end
