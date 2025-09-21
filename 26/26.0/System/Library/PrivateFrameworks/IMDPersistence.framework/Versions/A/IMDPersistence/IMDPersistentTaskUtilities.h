@class NSArray;

@interface IMDPersistentTaskUtilities : NSObject

@property (class, nonatomic, readonly) NSArray *allFlags;

+ (id)groupNameForFlag:(unsigned long long)a0;
+ (id)nameForFlag:(unsigned long long)a0;
+ (id)nameForReason:(long long)a0 inFlag:(unsigned long long)a1;
+ (long long)comparePTaskReasonsForFlag:(unsigned long long)a0 reason1:(long long)a1 reason2:(long long)a2;
+ (unsigned long long)groupForFlag:(unsigned long long)a0;
+ (unsigned long long)laneForFlag:(unsigned long long)a0 reason:(long long)a1;
+ (id)mergeUserInfosForFlag:(unsigned long long)a0 userInfo1:(id)a1 userInfo2:(id)a2;
+ (id)nameForLane:(unsigned long long)a0;
+ (long long)priorityForFlag:(unsigned long long)a0;
+ (long long)priorityForReason:(long long)a0 flag:(unsigned long long)a1;
+ (BOOL)reasonUpdateRequiresUserInfoMergeForFlag:(unsigned long long)a0 reason1:(long long)a1 reason2:(long long)a2;
+ (id)stringForFlag:(unsigned long long)a0 reason:(long long)a1;

- (id)init;

@end
