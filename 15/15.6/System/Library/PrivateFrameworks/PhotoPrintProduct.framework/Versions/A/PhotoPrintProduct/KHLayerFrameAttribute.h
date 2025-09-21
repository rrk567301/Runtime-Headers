@interface KHLayerFrameAttribute : KHFrameAttribute

- (id)init;
- (char)isPersisted;
- (void)persist;
- (void)deleteModel;
- (void)writeValue:(id)a0 toField:(id)a1;

@end
