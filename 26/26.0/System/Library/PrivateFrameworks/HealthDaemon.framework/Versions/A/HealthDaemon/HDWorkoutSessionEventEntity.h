@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (id)workoutEventsWithWorkoutSession:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (Class)workoutEventClass;

@end
