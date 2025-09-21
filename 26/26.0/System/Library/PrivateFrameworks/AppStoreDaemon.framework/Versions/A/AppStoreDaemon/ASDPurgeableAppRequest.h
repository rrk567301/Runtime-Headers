@class ASDPurgeableAppRequestOptions;

@interface ASDPurgeableAppRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurgeableAppRequestOptions *options;

- (id)initWithOptions:(id)a0;
- (id)init;

@end
