@class NSArray;

@interface PLVideoPlaybackResourceChoiceOptimizer : NSObject {
    NSArray *_videoResources;
    NSArray *_playableVideos;
    char _masterVideoIsPresent;
    char _masterVideoIsPlayable;
}

@property (readonly, nonatomic) NSArray *preferredVideoResources;

- (void).cxx_destruct;
- (id)initWithVideoResources:(id)a0;

@end
