@class EKEvent;

@interface CESRecurrenceWrapper : CESObjectWrapper

@property (retain) EKEvent *event;

+ (id)recurrenceRuleFromValues:(id)a0;

- (void).cxx_destruct;
- (id)rule;
- (BOOL)save;
- (id)recurrenceRuleString;
- (void)fillSyncDict;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;
- (BOOL)deleteEKObject;
- (BOOL)keepFromServer;
- (void)breakByDay:(id)a0 intoByDayDays:(id *)a1 andFrequencies:(id *)a2;
- (void)addRFCComponent:(id)a0 toSyncData:(id)a1;

@end
