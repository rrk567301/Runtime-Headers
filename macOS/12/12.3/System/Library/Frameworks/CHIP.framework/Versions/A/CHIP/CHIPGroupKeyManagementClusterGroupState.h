@class NSNumber;

@interface CHIPGroupKeyManagementClusterGroupState : NSObject

@property (retain, nonatomic) NSNumber *vendorId;
@property (retain, nonatomic) NSNumber *vendorGroupId;
@property (retain, nonatomic) NSNumber *groupKeySetIndex;

- (id)init;
- (void).cxx_destruct;

@end
