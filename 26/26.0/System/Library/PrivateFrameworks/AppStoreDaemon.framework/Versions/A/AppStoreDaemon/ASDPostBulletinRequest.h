@class ASDPostBulletinRequestOptions;

@interface ASDPostBulletinRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPostBulletinRequestOptions *options;

- (id)initWithOptions:(id)a0;
- (id)init;

@end
