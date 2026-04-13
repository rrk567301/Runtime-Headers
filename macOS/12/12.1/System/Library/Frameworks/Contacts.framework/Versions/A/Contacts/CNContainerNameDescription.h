@interface CNContainerNameDescription : CNContainerPropertyDescription

- (id)key;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;
- (BOOL)isNonnull;
- (id)abcdContainerKey;
- (id)abcdContainerValueForCNValue:(id)a0;

@end
