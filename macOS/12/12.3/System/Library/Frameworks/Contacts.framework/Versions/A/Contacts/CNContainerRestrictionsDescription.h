@interface CNContainerRestrictionsDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (BOOL)isWritable;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
