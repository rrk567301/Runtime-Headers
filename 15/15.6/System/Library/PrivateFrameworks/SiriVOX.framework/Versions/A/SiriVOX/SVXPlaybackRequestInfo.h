@interface SVXPlaybackRequestInfo : NSObject

@property (nonatomic) char didStart;
@property (nonatomic) char didFinish;
@property (nonatomic) double start;
@property (nonatomic) double finish;

- (double)duration;

@end
