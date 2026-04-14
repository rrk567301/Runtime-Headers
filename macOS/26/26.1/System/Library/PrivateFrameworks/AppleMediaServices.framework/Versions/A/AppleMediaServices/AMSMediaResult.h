@class NSDictionary, NSArray;

@interface AMSMediaResult : AMSURLResult

@property (readonly) NSDictionary *responseDictionary;
@property (readonly) NSArray *responseDataItems;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;

@end
