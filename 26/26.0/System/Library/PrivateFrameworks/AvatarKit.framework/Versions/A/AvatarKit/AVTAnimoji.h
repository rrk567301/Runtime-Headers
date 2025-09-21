@class NSString, NSDictionary, NSURL, VFXNode;

@interface AVTAnimoji : AVTAvatar {
    NSURL *_url;
    VFXNode *_lightingNode;
    VFXNode *_headNode;
    VFXNode *_avatarNode;
    VFXNode *_cameraNode;
    NSDictionary *_specializationSettings;
}

@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;
+ (id)_sceneURLForPuppetDirectoryURL:(id)a0;
+ (id)_scenePathForPuppetNamed:(id)a0;
+ (id)animojiNamed:(id)a0;
+ (id)animojiNames;
+ (id)animojiWithContentsOfURL:(id)a0;
+ (void)preloadAnimojiNamed:(id)a0;
+ (void)preloadPuppet:(id)a0;
+ (void)preloadPuppetNamed:(id)a0;
+ (id)puppetNamed:(id)a0 options:(id)a1;
+ (id)puppetNames;
+ (id)thumbnailForAnimojiNamed:(id)a0 options:(id)a1;
+ (id)thumbnailForPuppetNamed:(id)a0 options:(id)a1;

- (void)_load;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)updateWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)loadIfNeeded;
- (id)_sceneURL;
- (id)avatarNode;
- (id)cameraNode;
- (void)configureForBestAnimationQuality;
- (id)copyWithUsageIntent:(unsigned long long)a0;
- (id)headNode;
- (id)initWithDescriptor:(id)a0 usageIntent:(unsigned long long)a1 error:(id *)a2;
- (id)initWithName:(id)a0 error:(id *)a1;
- (id)lightingNode;
- (id)modelNode;
- (id)newDescriptor;
- (id)specializationSettings;
- (id)stickerPhysicsStateIdentifier;
- (unsigned long long)usageIntent;

@end
