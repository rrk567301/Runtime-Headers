@class NSNumber, NSArray;

@interface CHIPScenesClusterGetSceneMembershipResponseParams : NSObject

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *capacity;
@property (retain, nonatomic) NSNumber *groupId;
@property (retain, nonatomic) NSNumber *sceneCount;
@property (retain, nonatomic) NSArray *sceneList;

- (id)init;
- (void).cxx_destruct;

@end
