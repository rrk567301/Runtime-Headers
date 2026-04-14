@interface HDWorkoutBuilderEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (id)workoutEventsWithWorkoutBuilder:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
