@class VFXWorld, NSArray, VFXCamera, VFXRenderer;
@protocol VFXGraphBinding;

@interface PTVFXResources : NSObject

@property BOOL initializationCancelled;
@property (retain) VFXWorld *world;
@property (retain) id<VFXGraphBinding> lightBinding;
@property (retain) VFXRenderer *vfxRenderer;
@property (retain) VFXCamera *camera;
@property (retain) NSArray *reactionTemplates;

- (void).cxx_destruct;
- (void)asyncVFXInit:(id)a0 metalContext:(id)a1;

@end
