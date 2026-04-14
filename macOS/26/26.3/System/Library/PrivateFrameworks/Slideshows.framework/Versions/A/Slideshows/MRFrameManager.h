@class NSMutableDictionary;

@interface MRFrameManager : NSObject {
    NSMutableDictionary *mFrameSets;
    NSMutableDictionary *mFramePools;
}

+ (void)initialize;
+ (id)sharedManager;

- (id)init;
- (void)cleanup;
- (void)dealloc;
- (void)releaseResources;
- (id)frameWithFrameID:(id)a0;
- (void)recycleFrame:(id)a0;
- (id)resourcePathForFrameID:(id)a0 andResource:(id)a1;
- (id)sizeScriptForFrameID:(id)a0;

@end
