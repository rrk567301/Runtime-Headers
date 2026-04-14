@class NSArray;

@interface WBSTrackedFirstParty : WBSTrackingCapableFirstParty

@property (copy, nonatomic) NSArray *trackers;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (id)initWithDomain:(id)a0 trackers:(id)a1;

@end
