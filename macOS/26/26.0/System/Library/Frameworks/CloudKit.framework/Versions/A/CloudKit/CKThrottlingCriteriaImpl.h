@class CKContainerID, NSString, NSNumber, NSObject;
@protocol NSFastEnumeration;

@interface CKThrottlingCriteriaImpl : NSObject <CKThrottlingCriteria>

@property (retain, nonatomic) CKContainerID *containerID;
@property (nonatomic) long long databaseScope;
@property (retain, nonatomic) NSObject<NSFastEnumeration> *relevantZoneIDs;
@property (retain, nonatomic) NSNumber *operationType;
@property (retain, nonatomic) NSString *operationGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOperationType:(int)a0;
- (void).cxx_destruct;
- (id)initWithContainerID:(id)a0 databaseScope:(long long)a1;

@end
