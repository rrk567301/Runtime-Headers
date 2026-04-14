@interface QCEventManager : NSObject {
    struct __CFArray { } *_selectedPatches;
    struct __CFArray { } *_selectedCount;
}

@property BOOL interactive;

- (id)description;
- (id)init;
- (void)dealloc;
- (void)addPatch:(id)a0 atDepth:(double)a1 forIteration:(unsigned long long)a2 index:(unsigned long long)a3;
- (void)removePatch:(id)a0;
- (void)removeSelectionForIndex:(unsigned long long)a0;
- (id)selectedPatchForIndex:(unsigned long long)a0;

@end
