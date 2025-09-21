@class NSUUID, MKFCKHome, NSString;

@interface MKFCKHomeObject : MKFCKModel <HMDCoreDataCloudTransformable>

@property (copy, nonatomic) NSUUID *homeModelID;
@property (retain, nonatomic) MKFCKHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cloudStoreTypes;
+ (char)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (char)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (char)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (id)rootKeyPath;

- (char)validateForInsert:(id *)a0;
- (char)validateForUpdate:(id *)a0;
- (void)willSave;
- (char)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)isReadyToImportIntoLocalModelWithContext:(id)a0;
- (char)validateHome:(id *)a0 error:(id *)a1;
- (char)validateHomeModelID:(id *)a0 error:(id *)a1;

@end
