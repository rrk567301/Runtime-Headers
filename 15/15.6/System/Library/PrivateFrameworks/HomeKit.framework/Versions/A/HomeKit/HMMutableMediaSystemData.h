@class NSString, NSUUID;

@interface HMMutableMediaSystemData : HMMediaSystemData

@property (copy) NSString *name;
@property (getter=isDefaultName) char defaultName;
@property (copy) NSUUID *leftDestinationIdentifier;
@property (copy) NSUUID *rightDestinationIdentifier;
@property (copy) NSUUID *associatedGroupIdentifier;

@end
