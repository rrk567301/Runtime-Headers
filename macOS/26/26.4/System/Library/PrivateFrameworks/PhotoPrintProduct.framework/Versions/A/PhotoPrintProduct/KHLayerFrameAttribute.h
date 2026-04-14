@interface KHLayerFrameAttribute : KHFrameAttribute

- (void)persist;
- (id)init;
- (BOOL)isPersisted;
- (void)deleteModel;
- (void)writeValue:(id)a0 toField:(id)a1;

@end
