@class NSMutableDictionary;

@interface MRFrameManager : NSObject {
    NSMutableDictionary *mFrameSets;
    NSMutableDictionary *mFramePools;
}

+ (id)sharedManager;
+ (void)initialize;

- (void)releaseResources;
- (void)cleanup;
- (void)dealloc;
- (id)init;
- (id)frameWithFrameID:(id)a0;
- (void)recycleFrame:(id)a0;
- (id)resourcePathForFrameID:(id)a0 andResource:(id)a1;
- (id)sizeScriptForFrameID:(id)a0;

@end
