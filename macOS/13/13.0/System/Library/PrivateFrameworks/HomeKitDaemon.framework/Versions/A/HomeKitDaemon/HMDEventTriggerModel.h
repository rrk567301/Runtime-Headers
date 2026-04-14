@class NSString, NSData, NSNumber;

@interface HMDEventTriggerModel : HMDTriggerModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *evaluationCondition;
@property (retain, nonatomic) NSData *recurrences;
@property (retain, nonatomic) NSNumber *executeOnce;

+ (id)properties;

- (id)createPayload;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
