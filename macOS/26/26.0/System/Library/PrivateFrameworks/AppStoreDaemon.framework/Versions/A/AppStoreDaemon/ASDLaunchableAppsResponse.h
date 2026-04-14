@class NSArray;

@interface ASDLaunchableAppsResponse : ASDRequestResponse

@property (readonly, nonatomic) NSArray *bundleIDs;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIDs:(id)a0;

@end
