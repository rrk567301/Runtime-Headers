@class ASDPurgeAppsRequestOptions;

@interface ASDPurgeAppsRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurgeAppsRequestOptions *options;

- (id)initWithOptions:(id)a0;
- (id)init;

@end
