@interface CNContainerTypeDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (char)isWritable;
- (id)CNValueForContainer:(id)a0;
- (id)abcdContainerKey;
- (id)abcdContainerValueForCNValue:(id)a0;
- (char)isValidValue:(id)a0 error:(id *)a1;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
