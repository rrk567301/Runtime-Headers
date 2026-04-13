@class NSURL, NSString;

@interface MFJunkMailFilter : NSObject {
    struct __LSMMap { } *_map;
    BOOL _isDirty;
}

@property (retain, nonatomic) NSURL *mapFileURL;
@property (copy, nonatomic) NSString *mapFilePath;
@property (retain, nonatomic) NSURL *oldMapFileURL;
@property (nonatomic) BOOL isDirty;
@property (nonatomic) BOOL isInTraining;
@property (readonly, copy, nonatomic) NSString *state;
@property (nonatomic) BOOL useCleanMap;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL gatherUsageCounts;
@property (readonly, nonatomic) unsigned long long evaluatedMessageCount;
@property (readonly, nonatomic) unsigned long long evaluatedAsJunkMessageCount;
@property (readonly, nonatomic) unsigned long long manuallyMarkedAsJunkMessageCount;
@property (readonly, nonatomic) unsigned long long manuallyMarkedAsNotJunkMessageCount;
@property (readonly, nonatomic) long long junkMailTrainingBalance;
@property (readonly, nonatomic) long long junkMailTrainingDebt;
@property (readonly, nonatomic) long long junkMailTrainingCredit;

+ (id)sharedInstance;
+ (BOOL)shouldUpdateTrainingDebt;
+ (void)resetJunkMailUsageCounters;
+ (void)resetJunkMailTrainingBalance;
+ (id)_junkFilterUsageCounterKeys;
+ (id)junkStringForMessage:(id)a0 withRecorder:(id)a1;
+ (void)incrementJunkMailTrainingDebtBy:(long long)a0;
+ (void)incrementJunkMailTrainingCreditBy:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (struct __LSMMap { } *)map;
- (id)_usageCounter;
- (void)setMap:(struct __LSMMap { } *)a0;
- (long long)junkMailLevelForMessage:(id)a0 junkRecorder:(id)a1;
- (void)_saveTrainingWithDelay;
- (void)saveTraining;
- (long long)junkMailLevelForMessage:(id)a0;
- (id)trainOnMessages:(id)a0 junkMailLevel:(long long)a1;
- (void)userDidReplyToMessage:(id)a0;

@end
