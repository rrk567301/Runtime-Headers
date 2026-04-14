@interface SMUserConflictResolver : NSObject

+ (id)_findNextNumberAbove:(int)a0 inSet:(id)a1;
+ (id)_findUUIDNotInList:(id)a0 error:(id *)a1;
+ (BOOL)determineAndResolveUUIDUserConflictsForRequest:(id)a0 onSourceSystem:(id)a1 andDestinationSystem:(id)a2 error:(id *)a3;

@end
