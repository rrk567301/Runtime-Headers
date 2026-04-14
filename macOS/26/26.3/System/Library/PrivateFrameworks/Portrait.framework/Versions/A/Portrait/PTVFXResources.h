@class VFXWorld, NSArray, VFXCamera, VFXRenderer;
@protocol VFXGraphBinding;

@interface PTVFXResources : NSObject

@property (retain) VFXWorld *world;
@property (retain) id<VFXGraphBinding> lightBinding;
@property (retain) VFXRenderer *vfxRenderer;
@property (retain) VFXCamera *camera;
@property (retain) NSArray *reactionTemplates;

- (void).cxx_destruct;
- (BOOL)isInitialized;
- (void)asyncVFXInit:(id)a0 metalContext:(id)a1;

@end
