@class NSString, NSArray;

@interface MPCAssistantRemoteControlDestination : NSObject <NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSString *playerID;
@property (readonly, nonatomic) void *origin;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *hashedOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *outputGroups;
@property (readonly, nonatomic) NSString *outputGroupID;
@property (readonly, nonatomic) NSString *originatingOutputDeviceUID;
@property (readonly, nonatomic) char singleGroup;
@property (readonly, nonatomic) char originatingDeviceControl;
@property (readonly, nonatomic) char isCompanion;

+ (id)iBooksApplicationDestination;
+ (id)nowPlayingApplicationDestination;
+ (id)podcastsApplicationDestination;
+ (id)systemMediaApplicationDestination;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 usingConcreteClass:(Class)a1;
- (void)_getCompanionOriginWithQueue:(id)a0 completion:(id /* block */)a1;
- (void *)createPlayerPath;
- (id)initWithAppBundleID:(id)a0;
- (id)initWithAppBundleID:(id)a0 playerID:(id)a1 origin:(void *)a2;
- (void)resolveForWatchControlCommandWithRouteIdentifiers:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)resolveWithHashedRouteIdentifiers:(id)a0 audioRoutingInfo:(struct { char x0; char x1; char x2; char x3; })a1 completion:(id /* block */)a2;
- (void)resolveWithHashedRouteIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)resolveWithQueue:(id)a0 hashedRouteIdentifiers:(id)a1 localPlaybackPermitted:(char)a2 audioRoutingInfo:(struct { char x0; char x1; char x2; char x3; })a3 completion:(id /* block */)a4;
- (void)resolveWithQueue:(id)a0 hashedRouteIdentifiers:(id)a1 localPlaybackPermitted:(char)a2 completion:(id /* block */)a3;
- (void)resolveWithQueue:(id)a0 routeIdentifiers:(id)a1 localPlaybackPermitted:(char)a2 audioRoutingInfo:(struct { char x0; char x1; char x2; char x3; })a3 completion:(id /* block */)a4;
- (void)resolveWithQueue:(id)a0 routeIdentifiers:(id)a1 localPlaybackPermitted:(char)a2 completion:(id /* block */)a3;
- (void)resolveWithRouteIdentifiers:(id)a0 audioRoutingInfo:(struct { char x0; char x1; char x2; char x3; })a1 completion:(id /* block */)a2;
- (void)resolveWithRouteIdentifiers:(id)a0 completion:(id /* block */)a1;

@end
