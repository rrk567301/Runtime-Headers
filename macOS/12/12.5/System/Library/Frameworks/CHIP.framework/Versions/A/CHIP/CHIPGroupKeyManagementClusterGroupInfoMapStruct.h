@class NSNumber, NSArray, NSString;

@interface CHIPGroupKeyManagementClusterGroupInfoMapStruct : NSObject

@property (retain, nonatomic) NSNumber *groupId;
@property (retain, nonatomic) NSArray *endpoints;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (void).cxx_destruct;

@end
