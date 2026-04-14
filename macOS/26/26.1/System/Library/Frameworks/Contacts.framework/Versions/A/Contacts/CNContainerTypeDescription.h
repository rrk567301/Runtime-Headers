@interface CNContainerTypeDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (BOOL)isWritable;
- (id)key;
- (id)CNValueForContainer:(id)a0;
- (id)abcdContainerKey;
- (id)abcdContainerValueForCNValue:(id)a0;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
