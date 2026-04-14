@class NSNumber, NSArray;

@interface MTRGroupsClusterGetGroupMembershipResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *capacity;
@property (copy, nonatomic) NSArray *groupList;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
