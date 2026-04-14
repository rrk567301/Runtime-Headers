@class NSSet, NSDictionary, NSString;

@interface AMSEngagementPlacementInfo : NSObject

@property (retain) NSSet *anchorIdentifiers;
@property (readonly) NSDictionary *context;
@property (readonly) NSString *placement;
@property BOOL supportsMultipleMessages;

- (void)addAnchorIdentifier:(id)a0;
- (id)makeRawDictionary;
- (void).cxx_destruct;
- (id)initWithPlacement:(id)a0 context:(id)a1;

@end
