@class NSArray, SAMPGetState;

@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand

@property (retain, nonatomic) SAMPGetState *getState;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) double routeTimeout;

+ (id)getStateResponseRemote;
+ (id)getStateResponseRemoteWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
