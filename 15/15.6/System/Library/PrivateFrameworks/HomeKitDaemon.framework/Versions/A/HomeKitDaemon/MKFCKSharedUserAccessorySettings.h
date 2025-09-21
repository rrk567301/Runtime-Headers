@class NSUUID, NSString, MKFCKSharedUserDataRoot;

@interface MKFCKSharedUserAccessorySettings : MKFCKSharedUserData <HMDCoreDataCloudTransformable>

@property (copy, nonatomic) NSUUID *accessoryModelID;
@property (nonatomic) char listeningHistoryEnabled;
@property (nonatomic) char mediaContentProfileEnabled;
@property (nonatomic) char personalRequestsEnabled;
@property (retain, nonatomic) MKFCKSharedUserDataRoot *root;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)createWithHomeModelID:(id)a0 accessoryModelID:(id)a1 persistentStore:(id)a2 context:(id)a3;
+ (char)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (char)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (char)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;

- (char)_importIntoLocalUserModel:(id)a0 context:(id)a1;
- (char)_importWithContext:(id)a0;
- (char)importIntoLocalUserModel:(id)a0 context:(id)a1;

@end
