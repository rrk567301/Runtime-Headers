@class NSSet, ACDClient, NSDictionary;

@interface ACDClientAuthorization : NSObject

@property char isGranted;
@property (retain) ACDClient *client;
@property (retain) NSSet *grantedPermissions;
@property (copy) NSDictionary *options;

- (void).cxx_destruct;
- (id)initForClient:(id)a0;

@end
