@class NSArray;

@interface ASDLaunchableAppsResponse : ASDRequestResponse

@property (readonly, nonatomic) NSArray *bundleIDs;
@property BOOL success;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIDs:(id)a0;

@end
