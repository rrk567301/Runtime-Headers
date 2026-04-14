@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (Class)workoutEventClass;
+ (id)workoutEventsWithWorkoutSession:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
