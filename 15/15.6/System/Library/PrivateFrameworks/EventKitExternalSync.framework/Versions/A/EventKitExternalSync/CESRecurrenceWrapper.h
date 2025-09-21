@class EKEvent;

@interface CESRecurrenceWrapper : CESObjectWrapper

@property (retain) EKEvent *event;

+ (id)recurrenceRuleFromValues:(id)a0;

- (void).cxx_destruct;
- (char)save;
- (id)rule;
- (id)recurrenceRuleString;
- (void)addRFCComponent:(id)a0 toSyncData:(id)a1;
- (void)breakByDay:(id)a0 intoByDayDays:(id *)a1 andFrequencies:(id *)a2;
- (char)deleteEKObject;
- (void)fillSyncDict;
- (char)keepFromServer;
- (char)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
