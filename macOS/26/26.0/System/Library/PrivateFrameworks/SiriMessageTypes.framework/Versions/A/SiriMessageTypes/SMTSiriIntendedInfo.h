@class NSNumber;

@interface SMTSiriIntendedInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float odldScore;
@property (readonly, nonatomic) float aftmScore;
@property (readonly, nonatomic) float spkrIdScore;
@property (readonly, nonatomic) float lrnnScore;
@property (readonly, nonatomic) float checkerScore;
@property (readonly, copy, nonatomic) NSNumber *invocationType;
@property (readonly, nonatomic) float lrnnThreshold;
@property (readonly, nonatomic) float lrnnScale;
@property (readonly, nonatomic) float lrnnOffset;
@property (readonly, nonatomic) BOOL isGazeSignalPresent;
@property (readonly, nonatomic) float conversationalOdldScore;
@property (readonly, nonatomic) float spkrIdThreshold;
@property (readonly, nonatomic) float neuralCombinerScore;
@property (readonly, nonatomic) float neuralCombinerThreshold;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOdldScore:(float)a0 aftmScore:(float)a1 spkrIdScore:(float)a2 lrnnScore:(float)a3 checkerScore:(float)a4 invocationType:(id)a5 lrnnThreshold:(float)a6 lrnnScale:(float)a7 lrnnOffset:(float)a8 conversationalOdldScore:(float)a9;
- (id)initWithOdldScore:(float)a0 aftmScore:(float)a1 spkrIdScore:(float)a2 lrnnScore:(float)a3 checkerScore:(float)a4 invocationType:(id)a5 lrnnThreshold:(float)a6 lrnnScale:(float)a7 lrnnOffset:(float)a8 conversationalOdldScore:(float)a9 spkrIdThreshold:(float)a10;

@end
