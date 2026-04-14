@interface CNContainerGuardianStateDirtyDescription : CNContainerPropertyDescription

- (BOOL)isWritable;
- (id)key;
- (Class)valueClass;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
