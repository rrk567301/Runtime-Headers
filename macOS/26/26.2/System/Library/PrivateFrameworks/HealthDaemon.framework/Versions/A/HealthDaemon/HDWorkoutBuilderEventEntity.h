@interface HDWorkoutBuilderEventEntity : HDWorkoutEventEntity

+ (long long)protectionClass;
+ (Class)ownerEntityClass;
+ (id)databaseTable;
+ (id)ownerEntityReferenceColumn;
+ (id)workoutEventsWithWorkoutBuilder:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
