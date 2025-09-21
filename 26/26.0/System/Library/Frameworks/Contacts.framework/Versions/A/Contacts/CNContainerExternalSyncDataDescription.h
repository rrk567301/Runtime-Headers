@interface CNContainerExternalSyncDataDescription : CNContainerPropertyDescription

- (BOOL)isWritable;
- (Class)valueClass;
- (id)key;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
