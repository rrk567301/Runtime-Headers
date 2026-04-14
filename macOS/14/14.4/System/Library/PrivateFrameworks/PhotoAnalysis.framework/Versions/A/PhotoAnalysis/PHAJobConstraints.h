@interface PHAJobConstraints : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL canRunAutomaticBackgroundAnalysis;
@property (readonly, nonatomic) BOOL canRunAutomaticForegroundAnalysis;
@property (readonly, nonatomic) BOOL canRunUserInitiatedForegroundAnalysis;
@property (readonly, nonatomic) BOOL canUseNetwork;

+ (id)constraintsWithAllAllowances;
+ (id)constraintsWithNoAllowances;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqualToConstraints:(id)a0;
- (void)applyConstraints:(id)a0 usingMask:(id)a1;
- (id)asBitString;
- (id)initFromBitString:(id)a0;
- (id)initWithCanRunAutomaticBackgroundAnalysis:(BOOL)a0 canRunAutomaticForegroundAnalysis:(BOOL)a1 canRunUserInitiatedForegroundAnalysis:(BOOL)a2 canUseNetwork:(BOOL)a3;
- (unsigned int)qosClassForProcessing;
- (id)statusAsDictionary;

@end
