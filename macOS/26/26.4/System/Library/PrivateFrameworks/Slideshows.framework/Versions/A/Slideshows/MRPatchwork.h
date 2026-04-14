@class NSMutableArray;

@interface MRPatchwork : NSObject {
    NSMutableArray *_patches;
}

- (id)init;
- (void)dealloc;
- (void)addPatch:(id)a0;
- (id)patchworkWithPatch:(id)a0;
- (void)removeAllPatches;

@end
