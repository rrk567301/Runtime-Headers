@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (long long)protectionClass;
+ (id)workoutEventsWithWorkoutSession:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (Class)ownerEntityClass;
+ (id)databaseTable;
+ (id)ownerEntityReferenceColumn;
+ (Class)workoutEventClass;

@end
