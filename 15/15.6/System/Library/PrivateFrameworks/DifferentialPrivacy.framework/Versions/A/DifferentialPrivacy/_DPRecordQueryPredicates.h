@interface _DPRecordQueryPredicates : NSObject

+ (void)initialize;
+ (id)predicateForKey:(id)a0;
+ (id)predicateForRecordsMatchingKey:(id)a0;
+ (id)predicateForRecordsNotSubmitted;
+ (id)entityForKey:(id)a0;
+ (id)predicateForAllRecords;
+ (id)predicateForKey:(id)a0 beginsWith:(char)a1 matchReportVersion:(char)a2;
+ (id)predicateForKey:(id)a0 beginsWith:(char)a1 submitted:(char)a2 matchReportVersion:(char)a3;
+ (id)predicateForKeyBeginsWith:(id)a0;
+ (id)predicateForRecordsInDateRangeStart:(id)a0 end:(id)a1;
+ (id)predicateForRecordsNotSubmittedForKey:(id)a0;
+ (id)predicateForRecordsNotSubmittedForKeyBeginsWith:(id)a0;
+ (id)predicateForRecordsOlderThan:(id)a0;
+ (id)predicateForRecordsSubmitted;
+ (id)predicateForRecordsSubmittedForKey:(id)a0;
+ (id)predicateForRecordsWithVersionMismatch;

@end
