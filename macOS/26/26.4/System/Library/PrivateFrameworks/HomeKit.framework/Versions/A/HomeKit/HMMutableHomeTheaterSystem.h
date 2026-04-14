@class NSUUID, NSString;

@interface HMMutableHomeTheaterSystem : HMHomeTheaterSystem

@property (copy) NSUUID *identifier;
@property (copy) NSString *name;
@property (copy) NSString *audioDestinationIdentifier;
@property long long audioDestinationType;
@property (copy) NSUUID *associatedGroupIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
