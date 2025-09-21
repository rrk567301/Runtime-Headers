@class NSString;

@interface HMDCoreDataCloudTransformableLocalModelOnly : NSObject <HMFLogging, HMDCoreDataCloudTransformable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)logCategory;
+ (void)addToUpdates:(id)a0 objectID:(id)a1 properties:(id)a2;
+ (id)createWithLocalModel:(id)a0 context:(id)a1;
+ (char)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (char)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;
+ (char)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (char)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;

- (id)init;
- (id)createLocalModelWithContext:(id)a0;
- (id)fetchLocalModelWithContext:(id)a0;

@end
