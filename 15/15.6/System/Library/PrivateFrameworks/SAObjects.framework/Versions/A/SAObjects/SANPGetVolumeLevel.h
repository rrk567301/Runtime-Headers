@class NSArray;

@interface SANPGetVolumeLevel : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)getVolumeLevel;
+ (id)getVolumeLevelWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
