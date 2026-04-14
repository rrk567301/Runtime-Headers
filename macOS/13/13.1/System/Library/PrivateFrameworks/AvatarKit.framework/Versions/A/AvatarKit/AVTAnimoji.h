@class SCNNode, NSString, NSDictionary, NSURL;

@interface AVTAnimoji : AVTAvatar {
    NSURL *_url;
    SCNNode *_lightingNode;
    SCNNode *_headNode;
    SCNNode *_avatarNode;
    SCNNode *_cameraNode;
    NSDictionary *_specializationSettings;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SCNNode *lightingNode;
@property (readonly, nonatomic) SCNNode *cameraNode;

+ (BOOL)supportsSecureCoding;
+ (id)puppetNames;
+ (id)puppetNamed:(id)a0 options:(id)a1;
+ (id)thumbnailForPuppetNamed:(id)a0 options:(id)a1;
+ (void)preloadPuppet:(id)a0;
+ (void)preloadPuppetNamed:(id)a0;
+ (id)animojiNames;
+ (id)_scenePathForPuppetNamed:(id)a0;
+ (id)_sceneURLForPuppetDirectoryURL:(id)a0;
+ (id)animojiWithContentsOfURL:(id)a0;
+ (id)animojiNamed:(id)a0;
+ (id)thumbnailForAnimojiNamed:(id)a0 options:(id)a1;
+ (void)preloadAnimojiNamed:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)update;
- (id)url;
- (void)setUrl:(id)a0;
- (void)_load;
- (void)loadIfNeeded;
- (id)specializationSettings;
- (id)_sceneURL;
- (id)avatarNode;
- (id)headNode;
- (id)assetContainerNodes;
- (id)initWithName:(id)a0 error:(id *)a1;
- (id)newDescriptor;
- (id)initWithDescriptor:(id)a0 usageIntent:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)usageIntent;
- (id)copyWithUsageIntent:(unsigned long long)a0;
- (id)puppetState;
- (void)setPuppetState:(id)a0;
- (id)stickerPhysicsStateIdentifier;
- (void)configureForBestAnimationQuality;

@end
