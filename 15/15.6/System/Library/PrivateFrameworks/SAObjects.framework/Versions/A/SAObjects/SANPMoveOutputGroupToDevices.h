@class NSString, NSArray;

@interface SANPMoveOutputGroupToDevices : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)moveOutputGroupToDevices;
+ (id)moveOutputGroupToDevicesWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
