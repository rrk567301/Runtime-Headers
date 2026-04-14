@class NSArray, NSNumber;

@interface MTRGroupsClusterGetGroupMembershipParams : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *groupList;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
