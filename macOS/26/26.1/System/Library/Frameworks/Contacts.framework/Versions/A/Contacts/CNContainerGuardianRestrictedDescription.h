@interface CNContainerGuardianRestrictedDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (BOOL)isWritable;
- (id)key;
- (id)CNValueForContainer:(id)a0;
- (id)abcdContainerKey;
- (id)abcdContainerValueForCNValue:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
