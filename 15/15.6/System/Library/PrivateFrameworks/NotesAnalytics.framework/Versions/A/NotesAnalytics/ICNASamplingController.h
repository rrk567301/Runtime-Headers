@interface ICNASamplingController : NSObject

@property (readonly, nonatomic) char shouldTrackSyncHealth;

+ (id)sharedController;

- (id)init;

@end
