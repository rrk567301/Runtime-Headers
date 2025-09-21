@protocol TSDAnimationSession;

@interface TSDTextureDescription : NSObject <NSCopying> {
    char _shouldNotAddShapeAttributes;
}

@property (weak, nonatomic) id<TSDAnimationSession> session;
@property (nonatomic) char isMagicMove;
@property (nonatomic) char includesActionBuilds;
@property (nonatomic) char shouldAddFinal;
@property (nonatomic) char shouldAddMagicMoveObjectOnly;
@property (nonatomic) char shouldDistortToFit;
@property (nonatomic) char shouldNotAddContainedReps;
@property (nonatomic) char shouldNotAddShapeAttributes;
@property (nonatomic) char shouldNotAddText;
@property (nonatomic) char shouldSeparateReflection;
@property (nonatomic) char shouldSeparateShadow;
@property (nonatomic) char shouldSeparateStroke;
@property (nonatomic) char shouldAddParameterizedStroke;
@property (nonatomic) char shouldReverseStrokeDrawing;
@property (nonatomic) char shouldSeparateGroupedTextures;
@property (nonatomic) char shouldSeparateText;
@property (nonatomic) char shouldForceTextureGeneration;
@property (nonatomic) char shouldIgnoreScaleInSourceImage;
@property (nonatomic) char shouldAddMasks;
@property (nonatomic) char shouldAddVideoBackgroundFill;
@property (nonatomic) char shouldUseSourceImage;
@property (nonatomic) unsigned long long stage;
@property (nonatomic) unsigned long long deliveryStyle;
@property (nonatomic) int byGlyphStyle;
@property (nonatomic) int childRepByGlyphStyle;

+ (id)descriptionWithSession:(id)a0;
+ (id)descriptionWithTextureDescription:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
