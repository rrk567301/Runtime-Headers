@class NSString;

@interface PreKeywordSilenceConfig : NSObject

@property (nonatomic) long long lookbackFrames;
@property (nonatomic) long long minSilenceInLookbackFrames;
@property (nonatomic) float silenceProbability;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
