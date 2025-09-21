@interface CNContainerNameDescription : CNContainerPropertyDescription

- (id)key;
- (char)isWritable;
- (id)CNValueForContainer:(id)a0;
- (id)abcdContainerKey;
- (id)abcdContainerValueForCNValue:(id)a0;
- (char)isNonnull;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
