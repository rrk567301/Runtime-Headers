@class NSSet, ACDClient, NSDictionary;

@interface ACDClientAuthorization : NSObject

@property BOOL isGranted;
@property (retain) ACDClient *client;
@property (retain) NSSet *grantedPermissions;
@property (copy) NSDictionary *options;

- (id)initForClient:(id)a0;
- (void).cxx_destruct;

@end
