@class NSNumber;

@interface CHIPDoorLockClusterLockUserChangeEvent : NSObject

@property (retain, nonatomic) NSNumber *lockDataType;
@property (retain, nonatomic) NSNumber *dataOperationType;
@property (retain, nonatomic) NSNumber *operationSource;
@property (retain, nonatomic) NSNumber *userIndex;
@property (retain, nonatomic) NSNumber *fabricIndex;
@property (retain, nonatomic) NSNumber *sourceNode;
@property (retain, nonatomic) NSNumber *dataIndex;

- (id)init;
- (void).cxx_destruct;

@end
