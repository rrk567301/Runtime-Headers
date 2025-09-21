@class NSOrderedSet;

@interface CWMutableConfiguration : CWConfiguration

@property (copy) NSOrderedSet *networkProfiles;
@property char requireAdministratorForAssociation;
@property char requireAdministratorForPower;
@property char requireAdministratorForIBSSMode;
@property char rememberJoinedNetworks;

@end
