@class NSUUID;
@protocol HMIPersonManagerDataSource;

@interface HMIUpdatePersonsModelTask : HMIHomeTask

@property (readonly) NSUUID *sourceUUID;
@property (readonly) id<HMIPersonManagerDataSource> dataSource;
@property (readonly, getter=isExternalLibrary) char externalLibrary;
@property (readonly, getter=shouldRemoveExcessFaceCrops) char removeExcessFaceCrops;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)limitEnforcedSubsetFromPersons:(id)a0;
- (id)initWithTaskID:(int)a0 homeUUID:(id)a1 sourceUUID:(id)a2 dataSource:(id)a3 externalLibrary:(char)a4 removeExcessFaceCrops:(char)a5;
- (void)mainInsideAutoreleasePool;
- (void)subsampleFacesForPersons:(id)a0 withFaceObservationsMap:(id)a1 dataSource:(id)a2 vnUUIDToFaceCropUUIDMap:(id)a3;

@end
