@class NSArray, NSString;

@interface FCFeedTransformationComposite : NSObject <FCFeedTransforming>

@property (copy, nonatomic) NSArray *feedTransformations;
@property (nonatomic) BOOL shouldLogTransformationResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFeedTransformations:(id)a0;
- (id)init;
- (id)transformHeadlines:(id)a0;
- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;

@end
