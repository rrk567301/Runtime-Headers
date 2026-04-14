@class NSDictionary, NSArray;

@interface WPLinkFilteringData : NSObject

@property (readonly, nonatomic) NSDictionary *scopedQueryParameters;
@property (readonly, nonatomic) NSArray *rules;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRules:(id)a0;
- (id)initWithQueryParameters:(id)a0;
- (id)initWithQueryParameters:(id)a0 domains:(id)a1 paths:(id)a2;

@end
