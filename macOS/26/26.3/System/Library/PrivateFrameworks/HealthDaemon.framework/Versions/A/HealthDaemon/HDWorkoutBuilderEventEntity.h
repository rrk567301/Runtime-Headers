@interface HDWorkoutBuilderEventEntity : HDWorkoutEventEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)ownerEntityReferenceColumn;
+ (id)workoutEventsWithWorkoutBuilder:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (Class)ownerEntityClass;

@end
