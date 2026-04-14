@class EKEvent;

@interface CESRecurrenceWrapper : CESObjectWrapper

@property (retain) EKEvent *event;

+ (id)recurrenceRuleFromValues:(id)a0;

- (BOOL)save;
- (id)rule;
- (void).cxx_destruct;
- (id)recurrenceRuleString;
- (void)addRFCComponent:(id)a0 toSyncData:(id)a1;
- (void)breakByDay:(id)a0 intoByDayDays:(id *)a1 andFrequencies:(id *)a2;
- (BOOL)deleteEKObject;
- (void)fillSyncDict;
- (BOOL)keepFromServer;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
