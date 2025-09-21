@interface HDAlarmEventEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)checkConstraints;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)deleteAlarmEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (char)deleteAlarmEvents:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (char)deleteAllAlarmEventsWithClientIdentifier:(id)a0 transaction:(id)a1 enumerationHandler:(id /* block */)a2 error:(id *)a3;
+ (char)deleteAllAlarmEventsWithClientIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (char)enumerateAllAlarmEventsWithClientIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (char)enumerateAllAlarmEventsWithTransaction:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
+ (id)insertOrReplaceAlarmEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (char)insertOrReplaceAlarmEvents:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;

- (id)alarmEventWithTransaction:(id)a0 error:(id *)a1;

@end
