@interface KHLayerFrameAttribute : KHFrameAttribute

- (BOOL)isPersisted;
- (id)init;
- (void)persist;
- (void)deleteModel;
- (void)writeValue:(id)a0 toField:(id)a1;

@end
