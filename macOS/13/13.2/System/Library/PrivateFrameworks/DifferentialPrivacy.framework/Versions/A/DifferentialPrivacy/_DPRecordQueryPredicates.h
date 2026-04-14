@interface _DPRecordQueryPredicates : NSObject

+ (void)initialize;
+ (id)predicateForKey:(id)a0;
+ (id)predicateForRecordsInDateRangeStart:(id)a0 end:(id)a1;
+ (id)predicateForRecordsOlderThan:(id)a0;
+ (id)predicateForRecordsWithVersionMismatch;
+ (id)predicateForAllRecords;
+ (id)predicateForRecordsNotSubmitted;
+ (id)predicateForRecordsNotSubmittedForKey:(id)a0;
+ (id)predicateForRecordsNotSubmittedForKeyBeginsWith:(id)a0;
+ (id)predicateForRecordsSubmitted;
+ (id)predicateForRecordsSubmittedForKey:(id)a0;
+ (id)predicateForRecordsMatchingKey:(id)a0;
+ (id)predicateForKeyBeginsWith:(id)a0;
+ (id)predicateForKey:(id)a0 beginsWith:(BOOL)a1 submitted:(BOOL)a2 matchReportVersion:(BOOL)a3;
+ (id)predicateForKey:(id)a0 beginsWith:(BOOL)a1 matchReportVersion:(BOOL)a2;
+ (id)entityForKey:(id)a0;

@end
