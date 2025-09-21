@class NSString, NSArray, NSNumber;

@interface SANPSetVolumeLevel : SABaseClientBoundCommand

@property (nonatomic) char acknowledgedExceedingVolumeLimit;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *volumeValue;

+ (id)setVolumeLevel;
+ (id)setVolumeLevelWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
