@interface HMDCoordinationPrimaryMeshLogEvent : HMMLogEvent

@property char isLeader;
@property char didChangeLeader;
@property char didElectLeader;
@property char isInSecondaryMesh;
@property char didCurrentDeviceLeavePrimaryMesh;

@end
