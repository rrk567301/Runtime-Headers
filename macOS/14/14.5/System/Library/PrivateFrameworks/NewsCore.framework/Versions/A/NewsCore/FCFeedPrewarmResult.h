@class NSArray, NSSet;

@interface FCFeedPrewarmResult : NSObject

@property (readonly, nonatomic) NSArray *successfulRequests;
@property (readonly, nonatomic) NSArray *failedRequests;
@property (readonly, nonatomic) NSSet *feedIDs;

- (void).cxx_destruct;
- (id)initWithSuccessfulRequests:(id)a0 failedRequests:(id)a1;

@end
