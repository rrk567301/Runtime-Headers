@class NSString;

@interface MTFeedUpdatePreProcessResult : NSObject

@property (class, readonly, nonatomic) MTFeedUpdatePreProcessResult *shouldNotContinueResult;

@property (readonly, nonatomic) char shouldContinue;
@property (readonly, nonatomic) NSString *createdPodcastUUID;

- (void).cxx_destruct;
- (id)initWithShouldContinue:(char)a0 createdPodcastUUID:(id)a1;

@end
