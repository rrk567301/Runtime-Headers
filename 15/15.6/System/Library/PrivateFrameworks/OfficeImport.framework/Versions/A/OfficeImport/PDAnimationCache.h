@class PDAnimateMotionBehavior, NSString, PDBuild, PDAnimationTarget;

@interface PDAnimationCache : NSObject

@property (retain, nonatomic) PDAnimationTarget *target;
@property (nonatomic) int nodeType;
@property (nonatomic) int presetId;
@property (nonatomic) int presetSubType;
@property (nonatomic) int presetClass;
@property (nonatomic) int iterateType;
@property (nonatomic) char hasDelay;
@property (nonatomic) double delay;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasDirection;
@property (nonatomic) double direction;
@property (nonatomic) char hasPartCount;
@property (nonatomic) int partCount;
@property (retain, nonatomic) PDAnimateMotionBehavior *motionPath;
@property (nonatomic) char hasValue;
@property (nonatomic) double value;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) char isHead;
@property (nonatomic) int level;
@property (retain, nonatomic) PDBuild *build;

+ (id)createAnimationInfoDataForCacheItem:(id)a0 order:(unsigned int)a1;
+ (void)loadAnimationCache:(id)a0 pdAnimation:(id)a1 state:(id)a2;
+ (void)mapAnimationInfo:(id)a0 cacheData:(id)a1 state:(id)a2;
+ (void)mapCommonData:(id)a0 cacheData:(id)a1 state:(id)a2;

- (void).cxx_destruct;
- (id)initWithAnimationInfo:(id)a0;

@end
