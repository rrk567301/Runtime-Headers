@protocol HKSPMutableObject, HKSPObject;

@interface HKSPRelationshipChange : HKSPChange

@property (readonly, nonatomic) id<HKSPMutableObject> changedValue;
@property (readonly, nonatomic) id<HKSPObject> originalValue;
@property (readonly, nonatomic) char isAdd;
@property (readonly, nonatomic) char isUpdate;
@property (readonly, nonatomic) char isRemove;

- (id)deepCopy;
- (id)initWithProperty:(id)a0 changedObject:(id)a1 originalObject:(id)a2;

@end
