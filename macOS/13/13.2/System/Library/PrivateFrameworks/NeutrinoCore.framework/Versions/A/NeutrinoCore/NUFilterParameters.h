@class NSDictionary;

@interface NUFilterParameters : NSObject

@property (copy) NSDictionary *inputNodes;
@property (copy) NSDictionary *settings;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
