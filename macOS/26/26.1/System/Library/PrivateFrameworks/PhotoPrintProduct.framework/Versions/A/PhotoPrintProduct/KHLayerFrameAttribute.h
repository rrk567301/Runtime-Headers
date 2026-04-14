@interface KHLayerFrameAttribute : KHFrameAttribute

- (BOOL)isPersisted;
- (void)persist;
- (id)init;
- (void)deleteModel;
- (void)writeValue:(id)a0 toField:(id)a1;

@end
