@class PommesSearchXPCServer;

@interface PommesSearchServiceLauncher : NSObject

@property (readonly, nonatomic) PommesSearchXPCServer *pommesSearchService;

- (void).cxx_destruct;
- (id)init;

@end
