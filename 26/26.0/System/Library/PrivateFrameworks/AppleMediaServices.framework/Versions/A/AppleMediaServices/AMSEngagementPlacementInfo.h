@class NSDictionary, NSString;

@interface AMSEngagementPlacementInfo : NSObject

@property (readonly) NSDictionary *context;
@property (readonly) NSString *placement;
@property BOOL supportsMultipleMessages;

- (id)makeRawDictionary;
- (id)initWithPlacement:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
