@class NSString;

@interface DuringKeywordSilenceConfig : NSObject

@property (nonatomic) float minPercentageOfNonSilenceFrames;
@property (nonatomic) float silenceProbability;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
