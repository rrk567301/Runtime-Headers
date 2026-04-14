@interface CNContainerRestrictionsDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
