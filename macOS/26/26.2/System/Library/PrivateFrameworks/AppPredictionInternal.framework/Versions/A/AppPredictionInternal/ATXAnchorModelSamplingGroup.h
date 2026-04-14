@class NSArray;

@interface ATXAnchorModelSamplingGroup : NSObject

@property (readonly, nonatomic) NSArray *anchorWhitelist;
@property (readonly, nonatomic) long long samplingGroupId;

+ (long long)assignSamplingGroupToUserAndPersistToDefaults:(id)a0;
+ (id)getSamplingGroupForDataCollection;
+ (unsigned long long)numSamplingGroups;
+ (void)resetSamplingGroupAssignmentForUser;
+ (id)samplingGroupFromSamplingGroupId:(long long)a0;
+ (long long)selectSamplingGroupForUser;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithAnchorWhitelist:(id)a0 samplingGroupId:(long long)a1;

@end
