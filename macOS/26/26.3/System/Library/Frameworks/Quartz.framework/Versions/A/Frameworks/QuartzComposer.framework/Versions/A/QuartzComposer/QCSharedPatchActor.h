@class NSMutableDictionary;

@interface QCSharedPatchActor : QCPatchActor {
    NSMutableDictionary *_inspectorCache;
}

- (id)init;
- (void)dealloc;
- (id)inspectorForPatch:(id)a0;

@end
