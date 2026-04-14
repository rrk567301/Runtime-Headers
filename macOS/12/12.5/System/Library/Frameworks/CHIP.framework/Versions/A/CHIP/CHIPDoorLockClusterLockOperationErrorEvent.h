@class NSNumber, NSArray;

@interface CHIPDoorLockClusterLockOperationErrorEvent : NSObject

@property (retain, nonatomic) NSNumber *lockOperationType;
@property (retain, nonatomic) NSNumber *operationSource;
@property (retain, nonatomic) NSNumber *operationError;
@property (retain, nonatomic) NSNumber *userIndex;
@property (retain, nonatomic) NSNumber *fabricIndex;
@property (retain, nonatomic) NSNumber *sourceNode;
@property (retain, nonatomic) NSArray *credentials;

- (id)init;
- (void).cxx_destruct;

@end
