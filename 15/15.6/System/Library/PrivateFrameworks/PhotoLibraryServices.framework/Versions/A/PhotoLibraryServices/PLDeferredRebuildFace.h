@class NSString;

@interface PLDeferredRebuildFace : PLManagedObject <PLFaceRebuildDescription>

@property (readonly, nonatomic, getter=isHidden) char hidden;
@property (readonly, nonatomic, getter=isManual) char manual;
@property (readonly, nonatomic, getter=isRepresentative) char representative;
@property (readonly, nonatomic) double centerX;
@property (readonly, nonatomic) double centerY;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic) int nameSource;
@property (readonly, nonatomic) int cloudNameSource;
@property (readonly, nonatomic, getter=isClusterRejected) char clusterRejected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *faceUUID;
@property (copy, nonatomic) NSString *assetCloudGUID;
@property (copy, nonatomic) NSString *assetUUID;
@property (copy, nonatomic) NSString *personUUID;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) char hidden;
@property (nonatomic) char manual;
@property (nonatomic) char representative;
@property (nonatomic) char rejected;
@property (nonatomic) char clusterRejected;
@property (nonatomic) int nameSource;
@property (nonatomic) int cloudNameSource;
@property (nonatomic) int faceAlgorithmVersion;

+ (id)entityName;
+ (id)deferredFacesWithAssetCloudGUID:(id)a0 inManagedObjectContext:(id)a1;

- (id)additionalDescription;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;

@end
