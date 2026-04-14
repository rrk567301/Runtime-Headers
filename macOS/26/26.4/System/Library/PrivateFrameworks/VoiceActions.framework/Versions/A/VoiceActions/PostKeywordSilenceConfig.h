@class NSString;

@interface PostKeywordSilenceConfig : NSObject

@property (nonatomic) long long lookForwardFrames;
@property (nonatomic) long long minSilenceFramesExpected;
@property (nonatomic) float silenceProbability;
@property (nonatomic) long long minSilenceFrameCountAtEndOfKeyword;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
