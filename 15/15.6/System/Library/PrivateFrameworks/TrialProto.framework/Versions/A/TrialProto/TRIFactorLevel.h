@class TRIFactor, TRILevel;

@interface TRIFactorLevel : TRIPBMessage

@property (retain, nonatomic) TRIFactor *factor;
@property (nonatomic) char hasFactor;
@property (retain, nonatomic) TRILevel *level;
@property (nonatomic) char hasLevel;

+ (id)descriptor;
+ (id)hashForFactorLevels:(id)a0;

- (id)uniqueDataRepresentation;

@end
